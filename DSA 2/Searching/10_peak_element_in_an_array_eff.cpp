// peak element in an array eff approach
// peak element are those which is greader than left as well as right element

// Time -> O(N)
// Space -> O(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int peakElement(vector<int> nums)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (mid == 0 || nums[mid - 1] <= nums[mid] && mid == n - 1 || nums[mid + 1] <= nums[mid])
        {
            return mid;
        }
        else if (mid > 0 && nums[mid - 1] >= nums[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{1,2};
    cout << peakElement(arr);
    return 0;
}