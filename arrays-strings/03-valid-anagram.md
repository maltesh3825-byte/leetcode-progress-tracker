## Problem: Valid Anagram (Easy)

**Link:** [LeetCode 242](https://leetcode.com/problems/valid-anagram/)

### Approach

Sort both strings and compare the resulting character sequences. Equal sorted sequences contain exactly the same characters with the same frequencies.

### Complexity

- Time: O(n log n)
- Space: O(n)

### Notes

Different lengths immediately produce different sorted sequences. The local tests include both a valid and an invalid anagram.

**Accepted screenshot:** Add `03-result.png` after submitting.
