## Problem: Binary Search (Easy)

**Link:** [LeetCode 704](https://leetcode.com/problems/binary-search/)

### Approach

Maintain a search interval in the sorted input. Compare the middle element with the target and discard the half that cannot contain the target.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

An empty input has an invalid search interval and correctly returns -1.

**Accepted screenshot:** Add `06-result.png` after submitting.
