#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n=5;
    int arr[]={1,2,3,4,5};
    int k=2;
    sort(arr,arr+n);
    cout<<arr[n-k];
    return 0;
}