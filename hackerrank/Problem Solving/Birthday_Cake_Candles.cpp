#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxHeight(int arr[], int n)
{
    int largest=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
    // cout<<largest;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (largest==arr[i])
        {
            count++;
        }
        
    }
    // cout<<count;
    return count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<maxHeight(arr,n);
    return 0;
}
