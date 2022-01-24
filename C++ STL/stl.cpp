// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    string str;
    int num;
    double doub;
    // char x;

    node(str_ , num_ , doub_ , x_ )
    {
        str = str_;
        num = num_;
        doub=doub_;
        // x=x_;
    }
};

int main()
{
    node k;
    k.str = "keshav";
    k.num = 3;
    k.doub = 3.7;
    // k.x="k";

    node r = new node("kiki", 7, 7.7);

    cout>>k;
    return 0;
}