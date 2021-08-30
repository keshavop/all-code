#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool comprator(int a,int b){
    return a>b;         //descending order
    // return a<b;      //ascending order
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // sort(arr,arr+n);
    sort(arr,arr+n,comprator);

    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    
    return 0;
}