// peak element in an array eff approach

// Time -> O(N)
// Space -> O(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int peakElement(vector<int> nums)
{
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while (low<high)
    {
        int mid = (low + high)/2;
        if(mid ==0 && arr[mid-1])
    }
    
    return -1;
}

int main()
{
    vector<int> arr{1,2,1,3,5,6,4};
    cout<<peakElement(arr);
    return 0;
}