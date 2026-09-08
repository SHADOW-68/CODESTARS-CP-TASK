# Koko Eating Bananas
Source: https://leetcode.com/problems/koko-eating-bananas/

## Problem Statement
Find the minimum eating speed that allows Koko to finish all bananas within h hours.

## Approach / Intuition
Binary search the answer (eating speed). For each speed, check whether all bananas can be eaten within h hours.

## Algorithm
1. Search between 1 and the largest pile.
2. Calculate required hours for the middle speed.
3. If the speed works, search lower.
4. Otherwise search higher.

## Time Complexity
O(n log m), where m is the largest pile.

## Space Complexity
O(1)

## Edge Cases
- One pile
- h equals the number of piles
- Very large pile sizes
