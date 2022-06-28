// leetcode 1295 Find Numbers with Even Number of Digits

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findNumbers(vector<int> &nums)
{
    int n = nums.size();
    int even=0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]>0){
            nums[i]/10;
            count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    vector<int> nums{12, 345, 2, 6, 7896};
    findNumbers(nums);
    return 0;
}