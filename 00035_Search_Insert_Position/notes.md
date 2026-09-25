# 35. Search Insert Position

**Difficulty:** Easy  
**Topics:** Array, Binary Search  
**Link:** https://leetcode.com/problems/search-insert-position/description/

## Approach
Since the array is sorted in ascending order, we can use Binary Search.

- Initialize two pointers:
    - ```l = 0```
    - ```r = nums.size() - 1```
- Find the middle index using:
```mid = l + (r - l) / 2```
- If ```nums[mid] == target```, return mid.
- If ```nums[mid] < target```, the target must be on the right side, so set ```l = mid + 1```.
- If ```nums[mid] > target```, the target must be on the left side, so set ```r = mid - 1```.
- If the target is not found, l will point to the position where the target should be inserted.
- Therefore, return ```l```.
...

## Complexity

- Time: O(logn)
- Space: O(1)

## Key Learning
In Binary Search, when the target is not found, the final value of l represents the first position where the target can be inserted while keeping the array sorted.

So, returning ```l``` handles both cases:

- target already exists → its index
- target does not exist → its correct insertion position
