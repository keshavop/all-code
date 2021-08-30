#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    long int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i==j)
            {
                d1=d1+arr[i][j];
            }
            if (i==n-j-1)
            {
                // cout<<arr[i][j]<<endl;
                d2=d2+arr[i][j];
            }
        }
    }
    cout<<abs(d1-d2)<<endl;
    return 0;
}