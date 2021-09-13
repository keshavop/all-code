#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, rank;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> rank;

    sort(arr, arr + n);

    cout << arr[rank - 1];

    return 0;
}