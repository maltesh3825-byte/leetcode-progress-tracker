## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** [LeetCode 121](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

### Approach

Scan prices once while tracking the lowest price seen so far. At each price, compare the profit from selling today with the best profit already found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

When prices only decrease, the correct answer is zero because no profitable transaction exists.

**Accepted screenshot:** Add `04-result.png` after submitting.
