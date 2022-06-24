// peak element in an array naive approach

// Time -> O(N^2)
// Space -> O(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int peakElement(vector<int> nums)
{
    int n = nums.size();
    if (n == 1){
        return nums[0];
    }
    if(nums[0]>nums[1]){
        return nums[0];
    }
    if(nums[n-1]>=nums[n-2]){
        return nums[n-1];
    }
    for (int i = 1; i < n-1; i++)
    {
        if(nums[i]>=nums[i-1] && nums[i]>=nums[i+1]){
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{1,2,1,3,5,6,4};
    cout<<peakElement(arr);
    return 0;
}