#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

bool isSorted(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                return false;
            }
            
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