// bubble sort
// just comparing 2 element a and b if a is greater than b swap them and proceed

// Time -> 0(n^2)
// Space - > 0(1)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {10, 20, 50, 60, 97, 69, 81};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<<"After sorting"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}