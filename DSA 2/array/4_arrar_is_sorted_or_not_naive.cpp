#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)     //time  -> o(n^2)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n = 5;
    // int arr[5] = {1, 2, 3, 4, 5};
    int arr[5] = {1, 8, 9, 2, 15};

    printf("%s", isSorted(arr, n) ? "true" : "false");
    return 0;
}