#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            cout<< i;
            break;
        }
    }
    if (i==n)
    {
        cout<<"not found";
    }
    return 0;
}