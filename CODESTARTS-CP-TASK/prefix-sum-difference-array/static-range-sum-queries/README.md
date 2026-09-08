# Static Range Sum Queries
Source: https://cses.fi/problemset/task/1646/

## Problem Statement
Answer multiple queries asking for the sum of values in a fixed array over a given range.

## Approach / Intuition
Build a prefix sum array so every range sum can be calculated using two prefix values.

## Algorithm
1. Build prefix[i] = sum of elements up to i.
2. For a query [a,b], calculate prefix[b] - prefix[a-1].
3. Handle a = 1 separately.

## Time Complexity
O(n + q)

## Space Complexity
O(n)

## Edge Cases
- Query contains one element
- Query starts at the first element
- Large sums
