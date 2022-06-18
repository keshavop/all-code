// majority element in an array

// Time  -> 0(n^2)
// Space -> 0(1)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majority(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            if (count >= n / 2)
            {
                cout << "element is " << arr[i] << endl;
                return i;
            }
        }
    }
}

int main()
{
    int n = 7;
    int arr[] = {2,2,1,1,1,2,2};
    cout << majority(arr, n);
    return 0;
}