# Move Zeroes
Source: https://leetcode.com/problems/move-zeroes/

## Problem Statement
Move all zeroes to the end of the array while keeping the relative order of the non-zero elements.

## Approach / Intuition
Use two pointers. One pointer finds non-zero elements, while the other tracks the position where the next non-zero element should go.

## Algorithm
1. Keep a pointer `j` for the next non-zero position.
2. Traverse the array with pointer `i`.
3. When `nums[i]` is non-zero, swap it with `nums[j]` and increment `j`.
4. Continue until the entire array is processed.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Edge Cases
- Array contains only zeroes
- Array contains no zeroes
- Zeroes are already at the end
- Single-element array