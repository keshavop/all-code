
#include <iostream>
using namespace std;

int largest(int arr[], int n)           //time -> n^2
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout<<arr[i]<<" ";
            cout<<"index is"<<" "<<i;
        }
    }
}

int main()
{
    int n = 5;
    int arr[5] = {1, 8, 9, 7, 6};
    largest(arr, n);
    return 0;
}