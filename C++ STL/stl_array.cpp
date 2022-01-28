#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main()
{
    array<int, 5> arr;
    arr.fill(10);     //{10,10,10,10,10}

    arr.at(0);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr.at(i)<<" ";
    }
    
    return 0;
}