#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         vector<int> v;
//         int left = 0;
//         int right = nums.size() - 1;
//         while (left < right)
//         {
//             if (nums[left] + nums[right] == target)
//             {
//                 // return v[] {nums.[left],nums[right]};
//                 // return v[{left,right}];
//             }
//             else if (nums[left] + nums[right] > target)
//             {
//                 right--;
//             }
//             else
//             {
//                 left++;
//             }
//         }
//         // return v;
//     }
// };


class Solution
{
public:
    bool twoSum(vector<int> &nums, int target)
    {
        vector<int> v;
        int left = 0;
        int right = nums.size() - 1;
        while (left < right)
        {
            if (nums[left] + nums[right] == target)
            {
                return true;
            }
            else if (nums[left] + nums[right] > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return false;
    }
};

int main()
{
    int target = 9;
    vector<int> nums = {2, 7, 11, 15};
    Solution obj;
    cout<<obj.twoSum(nums, target);
    return 0;
}