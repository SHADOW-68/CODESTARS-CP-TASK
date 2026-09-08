# Car Pooling
Source: https://leetcode.com/problems/car-pooling/

## Problem Statement
Determine whether a vehicle can complete all trips without exceeding its capacity.

## Approach / Intuition
Use a difference array to record passenger changes at pickup and drop-off locations.

## Algorithm
1. Add passengers at each pickup location.
2. Remove passengers at each drop-off location.
3. Compute the running number of passengers.
4. If capacity is exceeded, return false.

## Time Complexity
O(n + m), where m is the maximum location.

## Space Complexity
O(m)

## Edge Cases
- Multiple trips at the same location
- Drop-off and pickup at the same location
- Capacity is exactly reached
