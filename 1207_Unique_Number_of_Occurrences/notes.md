# 1207. Unique Number of Occurrences

**Difficulty:** Easy  
**Topic:** Mid Level, Array, Hash Table
**Contest:** Weekly Contest 156
**Link:** https://leetcode.com/problems/unique-number-of-occurrences/description/

## Approach

- First, find the minimum and maximum values in the array.
- Use a frequency array to count how many times each value occurs.
- Since the array can contain negative values, use ```arr[i] - mn``` as the frequency array index.
- Then compare all non-zero frequencies with each other.
- If any two frequencies are equal, return ```false```. Otherwise, return ```true```.

## Dry Run

Consider:
arr=[1,2,2,1,1,3]
**Step 1:** Find mn and mx
mn=1
mx=3
So:
    mx-mn=3-1+1=3
vector<int>freq(3, 0);
Initially:
freq=[0, 0, 0]

**Step 2:** Count frequency
- For 1:
    1-mn=1-1 =0
    freq[0]++
- For 2:
    2-mn=2-1 =1
    freq[1]++
- For 3:
    3-mn=3-1=2
    freq[2]++
Finally:
    freq=[3, 2, 1]
Meaning:
    value 1 → frequency 3
    value 2 → frequency 2
    value 3 → frequency 1

**Step 3:** Compare frequencies
3 vs 2 → different
3 vs 1 → different
2 vs 1 → different

No duplicate frequency.
Therefore return ```true```;

## Complexity

- Time: ```O(n+k²)```
- Space: ```O(k)```
where ```k = max - min + 1.```
## Key Learning

A frequency array can be used to count occurrences efficiently. When array values can be negative, subtracting the minimum value can convert them into valid non-negative indices.