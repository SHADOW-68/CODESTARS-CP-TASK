# Single Number
Source: https://leetcode.com/problems/single-number/

## Problem Statement
Find the element that appears only once when every other element appears twice.

## Approach / Intuition
XOR cancels equal numbers because x ^ x = 0 and 0 ^ x = x.

## Algorithm
1. XOR every element.
2. All duplicate values cancel.
3. The remaining value is the single number.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Edge Cases
- n = 1
- Negative numbers
- Single number appears at the beginning or end
