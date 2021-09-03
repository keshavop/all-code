#include <bits/stdc++.h> 
#include<iostream> 
using namespace std;

int count(int x){
    int res=0;
    while (x>0)
    {
        x=x/10;
        res++;
    }
    // cout<<res;
    return res;
}

int main()
{
    int x;
    cin>>x;
    cout<<count(x);
    return 0;
}