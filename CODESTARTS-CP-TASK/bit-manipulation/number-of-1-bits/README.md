# Number of 1 Bits
Source: https://leetcode.com/problems/number-of-1-bits/

## Problem Statement
Count the number of set bits (1s) in the binary representation of an integer.

## Approach / Intuition
Repeatedly remove the lowest set bit using n & (n - 1).

## Algorithm
1. Initialize a counter.
2. While n is not zero, increment the counter.
3. Set n = n & (n - 1).
4. Return the counter.

## Time Complexity
O(number of set bits)

## Space Complexity
O(1)

## Edge Cases
- n = 0
- All bits are zero except one
- All bits are one
