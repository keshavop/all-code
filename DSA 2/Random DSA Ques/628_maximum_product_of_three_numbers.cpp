#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maximumProduct(vector<int> &nums)
{
    int n = nums.size();
    int product = 0;
    for (int i = 0; i < n; i++)
    {
        product = nums[i] * nums[i++];
    }
    
}

int main()
{
    vector<int> nums{1, 2, 3};
    // vector<int> nums{-1,-2,-3};
    cout<<maximumProduct(nums);
    return 0;
}