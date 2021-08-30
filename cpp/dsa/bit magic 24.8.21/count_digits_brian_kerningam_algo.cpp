#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int countDigits(int n){
    int res=0;
    while (n>0)
    {
        n=n&(n-1);
        res++;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<countDigits(n);
    return 0;
}