#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currentSum=0;
    int maxSum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentSum=0;
            for (int k = i; k <= j; k++)
            {
                currentSum+=arr[k];
            }
            if (currentSum>maxSum)
            {
                maxSum=currentSum;
            }
        }
    }
    cout<<maxSum;
    return 0;
}