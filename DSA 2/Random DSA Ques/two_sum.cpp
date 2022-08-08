#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         unordered_map<int, int> seen;
//         for (int i = 0; i < nums.size(); ++i)
//         {
//             int b = nums[i], a = target - b;
//             if (seen.count(a))
//                 return {seen[a], i}; // Found pair of (a, b), so that a + b = target
//             seen[b] = i;
//         }
//         return {};
//     }
// };

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    unordered_map<int, int> a;
    for (int i = 0; i < nums.size(); i++)
    {
        if (a.find(target - nums[i]) != a.end())
        {
            ans.push_back(a[target - nums[i]]);
            ans.push_back(i);
            return ans;
        }
        a[nums[i]] = i;
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    twoSum(nums, target);
    return 0;
}