## Problem: Move Zeroes (Easy)

**Link:** [LeetCode 283](https://leetcode.com/problems/move-zeroes/)

### Approach

Write each nonzero value at the next available position, then fill the remaining suffix with zeroes. This preserves the order of nonzero values and modifies the list in place.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The single-zero edge case remains unchanged. Swapping each nonzero value forward preserves the relative order of all nonzero values without allocating another list.

**Accepted screenshot:** Add `07-result.png` after submitting.
