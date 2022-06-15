#include <iostream>
using namespace std;

int sum(int arr[], int n){
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[i];
            res = max(sum,res);
        }
        
    }
    return res;
}

int main()
{
    int arr[]={1, -2, 3, -1, 2};
    int n = sizeof(arr[0])/sizeof(int);
    cout<<sum(arr,n);
    return 0;
}