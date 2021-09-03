#include <bits/stdc++.h>
using namespace std;

int findOdd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count % 2 != 0)
            return arr[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << findOdd(arr, n);
    return 0;
}