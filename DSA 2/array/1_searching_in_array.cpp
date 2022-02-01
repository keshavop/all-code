#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            cout << "Found";
        }
    }
    return -1;
    // cout<<"Not found";
}

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    search(arr, n, x);

    return 0;
}