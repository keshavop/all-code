#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

string jump(int x1,int v1,int x2, int v2){
    if ((x1>x2) && (v1>v2) || (x2<x1) && (v2<v1))
    {
        return "NO";
    }
    else{
        while (x1<x2)
        {
            x1+=v1;
            x2+=v2;
        }
        while (x2<x1)
        {
            x1+=v1;
            x2+=v2;
        }
        if (x1==x2)
        {
            return "YES";
        }
        else{
            return "NO";
        }
        
    }
}

int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>v2>>x2;
    cout<<jump(x1,v1,v2,x2);
    return 0;
}