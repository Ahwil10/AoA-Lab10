# Analysis of Algorithms - Lab 10

This repository contains my C++ solutions for Lab 10. The main focus of this lab is comparing standard recursion with Dynamic Programming (DP) techniques to optimize performance.

## Files in this Repository

1. **Fibonacci (Recursive)** (`fib.cpp`): A standard, naive recursive implementation to find the nth Fibonacci number. It is slow for large numbers.
2. **Fibonacci (Dynamic Programming)** (`fibmemo.cpp`): An optimized version using top-down DP (memoization) with an `unordered_map`. It runs significantly faster.
3. **0-1 Knapsack Problem** (`kanpsack.cpp`): Solves the classic knapsack problem using a bottom-up DP approach with a 2D matrix.

## How to Compile and Run

You can compile these files using `g++` in the terminal.

For example, to run the Dynamic Programming Fibonacci program:

1. Compile the code:
   ```bash
   g++ -o fibonacci fib.cpp
