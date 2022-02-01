#include <iostream>
using namespace std;

int reverse(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

int main()
{
    int n=5;
    int arr[n]={2,4,6,80,10};
    reverse(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}