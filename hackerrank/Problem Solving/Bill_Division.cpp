#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b; // remove this item
    cin >> b;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int price = 0;
    for (int i = 0; i < n; i++)
    {
        price += arr[i];
    }
    price-=arr[b];
    cout << price;
    return 0;
}