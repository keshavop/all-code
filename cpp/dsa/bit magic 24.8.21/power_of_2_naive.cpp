#include <bits/stdc++.h>
//#include <iostream>
using namespace std;            // 0 ->  false
                                // 1 ->  true
bool isPow2(int n){
    if (n==0)
    {
        return false;
    }
    while (n!=1)
    {
        if(n%2!=0){
            return false;
        }
        n=n/2;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    cout<<isPow2(n);
    return 0;
}