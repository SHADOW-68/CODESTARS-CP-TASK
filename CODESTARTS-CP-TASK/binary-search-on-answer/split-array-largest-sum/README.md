# Split Array Largest Sum
Source: https://leetcode.com/problems/split-array-largest-sum/

## Problem Statement
Split an array into k non-empty subarrays while minimizing the largest subarray sum.

## Approach / Intuition
Binary search the answer. For each possible maximum sum, greedily count how many subarrays are required.

## Algorithm
1. Lower bound = largest element.
2. Upper bound = total sum.
3. Check how many parts are needed for the middle value.
4. If k or fewer parts are enough, search lower.
5. Otherwise search higher.

## Time Complexity
O(n log S), where S is the total sum.

## Space Complexity
O(1)

## Edge Cases
- k = 1
- k = n
- One very large element
