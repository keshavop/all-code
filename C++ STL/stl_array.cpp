#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main()
{
    array<int, 5> arr;

    //fill func is used to initialise whole array with 10
    arr.fill(10); //{10,10,10,10,10}

    arr.at(0); //pointing at arr[0]

    for (int i = 0; i < 5; i++) //printing array
    {
        cout << arr.at(i) << " ";
    }

    array<int, 5> arr1 = {1, 3, 5, 7, 9};
    for (auto it : arr1.begin(); it != arr1.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}