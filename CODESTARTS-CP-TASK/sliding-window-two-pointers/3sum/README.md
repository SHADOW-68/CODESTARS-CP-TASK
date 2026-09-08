# 3Sum

Source: https://leetcode.com/problems/3sum/

## Problem Statement

Given an integer array, find all unique triplets whose sum is equal to 0.

## Approach / Intuition

Sort the array first. Then fix one element and use two pointers to find the other two elements.

Sorting also makes it easy to skip duplicates and avoid repeated triplets.

## Algorithm

1. Sort the array.
2. Fix the first element using a loop.
3. Use two pointers: one just after the fixed element and one at the end.
4. If the sum is 0, store the triplet and move both pointers.
5. If the sum is less than 0, move the left pointer right.
6. If the sum is greater than 0, move the right pointer left.
7. Skip duplicate values.

## Time Complexity

O(n²)

## Space Complexity

O(1) excluding the output.

## Edge Cases

- Array has fewer than 3 elements.
- No triplet has sum 0.
- Duplicate values.
- All values are positive or all are negative.