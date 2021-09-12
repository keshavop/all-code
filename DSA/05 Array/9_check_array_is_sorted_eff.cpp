#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

bool isSorted(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<arr[i-1])
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    // cout<<isSorted(arr,n);
    printf("%s", isSorted(arr, n)? "true": "false");
    return 0;
}