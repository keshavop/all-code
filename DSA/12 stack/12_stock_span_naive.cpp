#include <iostream>
using namespace std;

void printSpan(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int span = 1;
        for (int j = i-1; j >= 0 && arr[j] <= arr[i]; j--)
        {
            span++;
            cout << span << " ";
        }
    }
}

int main()
{
    int arr[] = {60,10,20,40,35,30};
    int n = 6;
    printSpan(arr, n);
    return 0;
}