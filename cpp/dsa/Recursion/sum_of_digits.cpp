#include <bits/stdc++.h> 
#include<iostream> 
using namespace std;
int sum(int n){
    if (n==0)
    {
        return 0;
    }
    else{
        return sum(n/10)+n%10;
    }
    
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}