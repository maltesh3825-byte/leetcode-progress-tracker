## Problem: Valid Parentheses (Easy)

**Link:** [LeetCode 20](https://leetcode.com/problems/valid-parentheses/)

### Approach

Push the expected closing bracket for each opening bracket onto a stack. Every closing bracket must match the most recently expected closing bracket, and the stack must be empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The crossing pattern `([)]` fails because `)` does not match the most recently opened bracket.

**Accepted screenshot:** Add `08-result.png` after submitting.
