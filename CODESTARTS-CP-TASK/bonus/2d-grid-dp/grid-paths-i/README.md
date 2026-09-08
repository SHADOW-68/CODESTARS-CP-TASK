# Grid Paths I
Source: https://cses.fi/problemset/task/1638/

## Problem Statement
Count the number of ways to travel from the top-left to the bottom-right of a grid while avoiding blocked cells.

## Approach / Intuition
Use 2D dynamic programming. Each reachable cell gets the sum of the ways to reach it from above and from the left.

## Algorithm
1. Initialize the starting cell.
2. For each cell, skip blocked cells.
3. Otherwise add paths from the top and left.
4. Take the result modulo 1e9+7.

## Time Complexity
O(n²)

## Space Complexity
O(n²)

## Edge Cases
- Starting cell is blocked
- Destination is blocked
- No possible path
