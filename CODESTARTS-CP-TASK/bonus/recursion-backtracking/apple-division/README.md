# Apple Division
Source:https://cses.fi/ckvo8q5wh/task/1623

## Problem Statement
Divide the apples into two groups so that the difference between their total weights is minimized.

## Approach / Intuition
For every apple, recursively choose whether it belongs to the first group or the second group.

## Algorithm
1. Start with both group sums at zero.
2. Recursively assign each apple to either group.
3. At the end, calculate the absolute difference.
4. Keep the minimum difference.

## Time Complexity
O(2^n)

## Space Complexity
O(n) for the recursion stack.

## Edge Cases
- n = 1
- All apples have equal weight
- Very large weights
