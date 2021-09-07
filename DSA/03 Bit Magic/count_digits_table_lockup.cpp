#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int table[256];
void initialize(){
    table[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}

int countSetBits(int n)
{
return table[n & 0xff] +table[(n >> 8) & 0xff] +table[(n >> 16) & 0xff] +table[n >> 24];
}

int main()
{
    initialize();
    int n;
    cin>>n;
    cout<<countSetBits(n);
    return 0;
}