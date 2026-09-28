## Problem: Longest Common Prefix (Easy)

**Link:** [LeetCode 14](https://leetcode.com/problems/longest-common-prefix/)

### Approach

Start with the first word as the candidate prefix. Shorten it until every later word starts with it, returning immediately when no common prefix remains.

### Complexity

- Time: O(n * m), where m is the prefix length
- Space: O(1) excluding the input

### Notes

An empty list has no common prefix, so the function returns an empty string.

**Accepted screenshot:** Add `05-result.png` after submitting.
