// Leaders in an array
// the element which is greater than right of all elements
// rightmost element is alwas a leader
// if ements are sorted in decreasing order than all elements are leader

#include <iostream>
using namespace std;

int leaders(int arr[], int n)   //time -> o(n^2)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
            {+
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << arr[i] << " ";      //printing leaders
        }
    }
}

int main()
{
    int n = 7;
    // int arr[7] = {10, 20, 20, 10, 30, 5, 8};
    int arr[7] = {7,10,4,10,6,5,2};

    leaders(arr,n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}