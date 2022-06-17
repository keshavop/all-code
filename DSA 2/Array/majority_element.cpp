#include <iostream>
using namespace std;

int majority(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n = 6;
    int arr[] = {1, 2, 3, 5, 5, 6};
    cout<<majority(arr, n);
    return 0;
}