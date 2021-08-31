#include <bits/stdc++.h>
using namespace std;

int allPairs(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int x= arr[i];
        for (int j = i+1; j < n; j++)
        {
            int y=arr[j];

            // cout<<x<<","<<y<<endl;
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
        cout<<endl;
    }
    
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

    allPairs(arr,n);

    return 0;
}