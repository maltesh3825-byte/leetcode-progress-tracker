## Problem: Two Sum (Easy)

**Link:** [LeetCode 1](https://leetcode.com/problems/two-sum/)

### Approach

Store each number's index in a hash map. For every number, look for its complement before storing it, so the pair is found in one pass.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The empty list is handled by returning an empty result. Duplicate values work because the earlier index remains available in the map.

**Accepted screenshot:** Add `01-result.png` after submitting.
