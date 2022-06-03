#include <iostream>
#include <unordered_set>
using namespace std;

int distinctElements(int arr[], int n)
{
    unordered_set<int> s;  // unorder set because it did not insert duplicate element
    for (int i = 0; i < n; i++)   // insering elements in set
    {
        s.insert(arr[i]);
    }
    return s.size();
}

int main()
{
    int arr[] = {10, 4, 6, 9, 34, 67, 67, 89};
    int n = (sizeof(arr) / sizeof(arr[0]));

    cout<<distinctElements(arr,n);
    return 0;
}