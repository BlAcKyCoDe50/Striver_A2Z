/*

Given an integer array nums, find the maximum possible bitwise OR of a subset of nums and return the number of different non-empty subsets
with the maximum bitwise OR.

An array a is a subset of an array b if a can be obtained from b by deleting some (possibly zero) elements of b. Two subsets are
considered different if the indices of the elements chosen are different.

The bitwise OR of an array a is equal to a[0] OR a[1] OR ... OR a[a.length - 1] (0-indexed).



Example 1:

Input: nums = [3,1]
Output: 2
Explanation: The maximum possible bitwise OR of a subset is 3. There are 2 subsets with a bitwise OR of 3:
- [3]
- [3,1]
Example 2:

Input: nums = [2,2,2]
Output: 7
Explanation: All non-empty subsets of [2,2,2] have a bitwise OR of 2. There are 23 - 1 = 7 total subsets.
Example 3:

Input: nums = [3,2,1,5]
Output: 6
Explanation: The maximum possible bitwise OR of a subset is 7. There are 6 subsets with a bitwise OR of 7:
- [3,5]
- [3,1,5]
- [3,2,5]
- [3,2,1,5]
- [2,5]
- [2,1,5]

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int cntsubsets(int idx, int currOr, vector<int> nums, int maxOr)
{
    if (idx == nums.size())
    {
        if (currOr == maxOr)
            return 1; // subset found
        return 0;
    }

    // take the susbset
    int takecnt = cntsubsets(idx + 1, currOr | nums[idx], nums, maxOr);
    // not take
    int nottake = cntsubsets(idx + 1, currOr, nums, maxOr);
    return takecnt + nottake;
}

int countMaxOrSubsets(vector<int> &nums)
{
    int maxOr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        maxOr = maxOr | nums[i];
    }
    int currOr = 0;
    return cntsubsets(0, currOr, nums, maxOr);
}

main()
{
    vector<int> nums = {3, 2, 1, 5};
    cout << countMaxOrSubsets(nums);
    return 0;
}