#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int insert(int arr[],int n,int x,int pos){
    int cap;
    if (n==cap)
    {
        return n;
    }
    int idx=pos-1;
    for (int i = n-1; i >=idx; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return n+1;
}

int main()
{
    int n,x,pos;
    cin>>n>>x>>pos;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<insert(arr,n,x,pos)<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}