#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int countDigits(int n){
    int res=0;
    while (n!=0)
    {
        if(n%2!=0){
            res++;
        }
        n=n/2;
    }
    cout<<res;
}

int main()
{
    int n;
    cin>>n;
    countDigits(n);
    return 0;
}