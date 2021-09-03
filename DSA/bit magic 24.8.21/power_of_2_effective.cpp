#include <bits/stdc++.h>
//#include <iostream>
using namespace std;            // 0 ->  false
                                // 1 ->  true
bool isPow2(int n){
    if (n==0)
    {
        return false;
    }
    return ((n&(n-1))==0);
}

int main()
{
    int n;
    cin>>n;
    cout<<isPow2(n);
    return 0;
}