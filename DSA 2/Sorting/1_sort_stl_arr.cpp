// Sort in C++ Stl in array

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {10, 20, 50, 30, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // sort func in increasing order
    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << endl;

    sort(arr, arr + n, greater<int>()); // sort func in decreasing order
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}