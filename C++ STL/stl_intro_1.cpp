#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {10, 20, 15, 8, 3};
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (binary_search(arr, arr + 5, 3))
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
    }
    return 0;
}