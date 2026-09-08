# 4Sum

Source: https://leetcode.com/problems/4sum/

## Problem Statement

Given an integer array and a target, find all unique quadruplets whose sum is equal to the target.

## Approach / Intuition

Sort the array, fix two elements, and use two pointers to find the remaining two elements.

Sorting helps us move the pointers efficiently and skip duplicate quadruplets.

## Algorithm

1. Sort the array.
2. Fix the first element using a loop.
3. Fix the second element using another loop.
4. Use two pointers for the remaining elements.
5. If the sum is smaller than the target, move the left pointer right.
6. If the sum is larger than the target, move the right pointer left.
7. When the sum equals the target, store the quadruplet.
8. Skip duplicate values.

## Time Complexity

O(n³)

## Space Complexity

O(1) excluding the output.

## Edge Cases

- Fewer than 4 elements.
- No quadruplet matches the target.
- Duplicate values.
- Negative numbers.
- Integer overflow for large values.