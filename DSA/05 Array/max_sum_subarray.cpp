#include <bits/stdc++.h> 
#include<iostream> 
using namespace std;

int maxSum(int arr[],int n){
    int res=arr[0];
    int maxEnding=arr[0];
    for (int i = 0; i<n; i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(maxEnding,res);
    }
    return res;
}

int main()
{
    int n=6;
    int arr[]={-3,8,-2,4,-5,6};
    cout<<maxSum(arr,n);
    return 0;
}