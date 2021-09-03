#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main()
{
    vector <int> arr={1,2,3,4,5};   //intilialization

    for (int i = 0; i < arr.size(); i++)    //printing
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<arr.size();   // no. of elements

    cout<<arr.capacity();   //capacity of vector

    return 0;
}