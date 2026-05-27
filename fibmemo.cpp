#include <iostream>
#include <unordered_map>

using namespace std;

// DP implementation using memoization
long long fibonacciMemo(int n, unordered_map<int, long long>& memo) {
    // Check if the result is already in our dictionary (cache)
    if (memo.find(n) != memo.end()) {
        return memo[n]; // Return the saved calculation!
    }

    long long result;
    // Base cases
    if (n <= 0) return 0;
    if (n == 1 || n == 2) {
        result = 1;
    } else {
        // Notice we pass the 'memo' map down into the next calls
        result = fibonacciMemo(n - 1, memo) + fibonacciMemo(n - 2, memo);
    }

    // Save the result before returning it
    memo[n] = result;
    return result;
}

int main() {
    int n = 50; // Let's find a much larger number to show how fast DP is
    unordered_map<int, long long> memo;

    cout << "Calculating Fibonacci(" << n << ") using Dynamic Programming...\n";
    long long result = fibonacciMemo(n, memo);
    cout << "Result: " << result << "\n";

    return 0;
}
