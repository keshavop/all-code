#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int arr[], int low = 0, int high=0){
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int leftRotate(int arr[], int n, int d){
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;
    int d = 2;
    int arr[] = {2, 8, 9, 80, 10};
    leftRotate(arr, n, d);
    print(arr, n);
    return 0;
}