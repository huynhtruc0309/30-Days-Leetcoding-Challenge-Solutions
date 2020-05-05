# Product of Array Except Self
Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].
# Example:
```
Input:  [1,2,3,4]
Output: [24,12,8,6]
```
### Constraint: 
It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

### Note: 
Please solve it without division and in O(n).

### Follow up:
Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)
### Solution
``` c++

```
# Valid Parenthesis String
Given a string containing only three types of characters: '(', ')' and '*', write a function to check whether this string is valid. We define the validity of a string by these rules:

1. Any left parenthesis '(' must have a corresponding right parenthesis ')'.
2. Any right parenthesis ')' must have a corresponding left parenthesis '('.
3. Left parenthesis '(' must go before the corresponding right parenthesis ')'.
4. '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string.
5. An empty string is also valid.
### Example 1:
```
Input: "()"
Output: True
```
### Example 2:
```
Input: "(*)"
Output: True
```
### Example 3:
```
Input: "(*))"
Output: True
```
### Note:
The string size will be in the range [1, 100].
### Solution
``` c++
```
# Number of Islands
Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.
### Example 1:
```
Input:
11110
11010
11000
00000

Output: 1
```
### Example 2:
```
Input:
11000
11000
00100
00011

Output: 3
```
### Solution
``` c++

```
# Minimum Path Sum
Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.
### Note:
You can only move either down or right at any point in time.
### Example:
```
Input:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
Output: 7
Explanation: Because the path 1→3→1→1→1 minimizes the sum.
```
# Search in Rotated Sorted Array
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

### Example 1:
```
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
```
### Example 2:
```
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
```
### Solution
``` c++
```
# Construct Binary Search Tree from Preorder Traversal
Return the root node of a binary search tree that matches the given preorder traversal.

(Recall that a binary search tree is a binary tree where for every node, any descendant of node.left has a value < node.val, and any descendant of node.right has a value > node.val.  Also recall that a preorder traversal displays the value of the node first, then traverses node.left, then traverses node.right.)

It's guaranteed that for the given test cases there is always possible to find a binary search tree with the given requirements.

### Example 1:
```
Input: [8,5,1,7,10,12]
Output: [8,5,10,1,7,null,12]
![binary tree](`https://assets.leetcode.com/uploads/2019/03/06/1266.png`)
```
### Constraints:
1 <= preorder.length <= 100
1 <= preorder[i] <= 10^8
The values of preorder are distinct.
### Solution
``` c++
```
