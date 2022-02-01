#include <iostream>
using namespace std;

bool sorted(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n=5;
    int arr[n]={2,4,6,80,10};
    cout<<sorted(arr,n);
    return 0;
}