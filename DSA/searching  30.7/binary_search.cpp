#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int bSearch(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n=5;
    // cin>>n;
    int key=2;
    // cin>>key;
    int arr[]={1,2,3,5,9};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    cout<<bSearch(arr,n,key);
    return 0;
}