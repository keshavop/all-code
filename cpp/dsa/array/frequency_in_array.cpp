#include <bits/stdc++.h> 
#include<iostream> 
using namespace std;

void frequency(int arr[],int n){
    int freq=1,i=1;
    while (i<n)
    {
        while (i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<< " " <<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1 || arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<< " " <<"1"<<endl;
    }
}

int main()
{
    int n=6;
    int arr[]={10,10,10,25,50,50};
    frequency(arr,n);
    return 0;
}