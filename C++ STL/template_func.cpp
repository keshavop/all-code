#include <iostream>
using namespace std;

template <typename T>
T arrMax(T arr[], int n)
{
    T res = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > res)
        {
            res = arr[i];
        }
    }
    return res;
}

int main()
{
    int arr1[] = {10, 20, 30};
    cout << arrMax<int>(arr1, 3) << endl;

    float arr2[] = {10.9, 5, 8, 7, 8.9};
    cout << arrMax<float>(arr2, 5);
    return 0;
}