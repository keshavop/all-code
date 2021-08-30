
//  code is wrong

#include <bits/stdc++.h> 
#include<iostream> 
using namespace std;

int pieces(int n,int a,int b,int c){
    if (n==0)
    {
        return 0;
    }
    if (n<0)
    {
        return -1;
    }

    int res=max(pieces(n-a,a,b,c),pieces(n-b,a,b,c),pieces(n-c,a,b,c));
    
    if (res==-1){
        return -1;
    }
    else{
        return res+1;
    }
}

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<pieces(n,a,b,c);
    return 0;
}