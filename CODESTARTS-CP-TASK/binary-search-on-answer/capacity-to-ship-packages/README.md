# Capacity To Ship Packages Within D Days
Source: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

## Problem Statement
Find the minimum ship capacity needed to deliver all packages within the given number of days.

## Approach / Intuition
Binary search the possible capacity and check how many days are needed for each capacity.

## Algorithm
1. Lower bound = largest package.
2. Upper bound = sum of all packages.
3. Check the number of days needed for the middle capacity.
4. Narrow the search based on whether it is feasible.

## Time Complexity
O(n log S), where S is the sum of package weights.

## Space Complexity
O(1)

## Edge Cases
- One package
- One day
- Capacity equals the total weight
