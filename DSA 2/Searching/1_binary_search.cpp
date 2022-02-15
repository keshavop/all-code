// Binary Search
// iterative

#include <iostream>
using namespace std;

int binary_search(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if (arr[mid]>x)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n=6;
    int x=50;
    int arr[]={3,5,7,8,9,0};
    cout<<binary_search(arr,n,x);
    return 0;
}