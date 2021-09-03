#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9, 10}};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int num : arr[i])
        {
            cout << num << ",";
        }
        cout << endl;
    }

    return 0;
}