#include <iostream>

using namespace std;

// Standard recursive implementation
int fibonacciRecursive(int n) {
    // Base cases
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;

    // Recursive call
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n = 10; // Let's find the 10th Fibonacci number

    cout << "Calculating Fibonacci(" << n << ") using standard recursion...\n";
    int result = fibonacciRecursive(n);
    cout << "Result: " << result << "\n";

    return 0;
}
