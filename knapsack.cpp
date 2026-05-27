#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 0-1 Knapsack Implementation
int knapsack01(int capacity, const vector<int>& weights, const vector<int>& values, int n) {
    // Create a 2D grid to build up our solutions
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // Build the table bottom-up
    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= capacity; ++w) {
            // Can we fit this item in the current capacity 'w'?
            if (weights[i - 1] <= w) {
                // Yes. Do we get more value by taking it, or leaving it?
                int take_it = values[i - 1] + dp[i - 1][w - weights[i - 1]];
                int leave_it = dp[i - 1][w];
                dp[i][w] = max(take_it, leave_it);
            } else {
                // No, it's too heavy. We must leave it.
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // The bottom-right corner of the grid holds the maximum value
    return dp[n][capacity];
}

int main() {
    // Example scenario
    vector<int> values = {60, 100, 120};   // Value of each item
    vector<int> weights = {10, 20, 30};    // Weight of each item
    int capacity = 50;                     // Max weight the knapsack can hold
    int n = values.size();                 // Number of items

    cout << "Knapsack Capacity: " << capacity << "\n";
    cout << "Items available: " << n << "\n\n";

    int max_value = knapsack01(capacity, weights, values, n);

    cout << "The maximum value we can carry is: " << max_value << "\n";
    // (It should pick item 2 and 3: 100 + 120 = 220 value, weighing 20 + 30 = 50 weight)

    return 0;
}
