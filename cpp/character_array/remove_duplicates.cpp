#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void removeDuplicate(char arr[]){
    int l=strlen(arr);
    if (l==0 || l==1)
    {
        return;
    }
    int prev=0;
    for (int current = 1; current < l; current++)
    {
        if (arr[current]!=arr[prev])
        {
            prev++;
            arr[prev]=arr[current];
        }
    }
    arr[prev+1]='\0';
}

int main()
{
    char arr[1000];
    cin.getline(arr,1000);
    removeDuplicate(arr);
    cout<<arr;
    return 0;
}