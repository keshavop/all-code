#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool sorted(int arr[], int n)
{
    // Array has one or no element
    if (n == 0 || n == 1)
        return true;

    for (int i = 1; i < n; i++)

        // Unsorted pair found
        if (arr[i - 1] > arr[i])
            return false;

    // No unsorted pair found
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    // cout << sorted(arr, n);
    if (sorted(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}