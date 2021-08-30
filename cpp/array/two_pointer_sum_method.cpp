#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[]={1,3,5,7,10,11,12,13};
    int target=16;
    int currentSum=0;

    int i=0;
    int j=sizeof(arr)/sizeof(int)-1;
    while (i<j)
    {
        int currentSum=arr[i]+arr[j];
        if(currentSum>target){
            j--;
        }
        else if (currentSum<target)
        {
            i++;
        }
        else if (currentSum==target)
        {
            cout<<arr[i]<<" and S"<<arr[j]<<endl;
            i++;
            j--;
        }
        
    }
    
    return 0;
}