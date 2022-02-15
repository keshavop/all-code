// index of element first occurence
// time -> O(n) Big O
// space -> O(1)
#include <iostream>
using namespace std;

int first_occur(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 9;
    int x = 67;
    int arr[] = {1, 10, 10, 13, 16, 19, 67, 45, 56};
    cout << first_occur(arr, n, x);
    return 0;
}