# Power of Two
Source: https://leetcode.com/problems/power-of-two/

## Problem Statement
Determine whether a given integer is a power of two.

## Approach / Intuition
A positive power of two has exactly one set bit in its binary representation.

## Algorithm
1. Check that n is positive.
2. Use n & (n - 1).
3. If the result is zero, n is a power of two.

## Time Complexity
O(1)

## Space Complexity
O(1)

## Edge Cases
- n = 1
- n = 0
- Negative numbers
