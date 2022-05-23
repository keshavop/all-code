// index of element first occurence eff using binary search
// time -> O(Logn)
// space -> O(1)

#include <iostream>
using namespace std;

int first_occur(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n = 9;
    int x = 67;
    int arr[] = {1, 10, 10, 13, 16, 19, 67, 45, 67, 56};
    cout << first_occur(arr, n, x);
    return 0;
}