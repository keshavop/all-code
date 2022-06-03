#include <iostream>
using namespace std;

int distinctElements(int arr[], int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
    bool flag=false;
        for (int j = 1; j < i; j++)
        {
            if(arr[i]==arr[j]){
                flag=true;
                break;;
            }
        }
        if(flag==false){
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {10, 4, 6, 9, 34, 34, 67, 89};
    int n = (sizeof(arr) / sizeof(arr[0]));

    cout<<distinctElements(arr,n);
    return 0;
}