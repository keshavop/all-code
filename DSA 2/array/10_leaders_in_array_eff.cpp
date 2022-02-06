// Leaders in an array
// the element which is greater than right of all elements
// rightmost element is alwas a leader
// if ements are sorted in decreasing order than all elements are leader

#include <iostream>
using namespace std;

int leaders(int arr[], int n)   // time -> theta(n) 
{
    int curr_leader = arr[n - 1];   // last element is always a leader
    cout << curr_leader << " ";

    for (int i = n - 2; i >= 0; i--)    // traversing array in reverse dirn
    {
        if (curr_leader < arr[i])
        {
            curr_leader = arr[i];
            cout << curr_leader << " ";
        }
    }
}

int main()
{
    int n = 7;
    // int arr[7] = {10, 20, 20, 10, 30, 5, 8};
    int arr[7] = {7, 10, 4, 10, 6, 5, 2};

    leaders(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}