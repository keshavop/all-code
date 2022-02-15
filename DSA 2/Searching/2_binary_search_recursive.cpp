// Binary Search
// recursive

#include <iostream>
using namespace std;

int binary_search(int arr[],int n,int low, int high,int x){
    if(low<high){
        return -1;
    }
    int mid = (low+high)/2;

    if(arr[mid]==x){
        return mid;
    }
    else if (arr[mid]>x)
    {
        return(arr,n,low,mid-1,x);
    }
    else{
        return(arr,n,mid+1,high,x);
    }
}

int main()
{
    int n=6;
    int x=50;
    int arr[]={3,5,7,8,9,0};
    cout<<binary_search(arr,n,0,n-1,x);
    return 0;
}