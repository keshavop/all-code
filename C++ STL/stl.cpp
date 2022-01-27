#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct kiki
{
    string str;
    int num;
    double doub;
    // char x;

    kiki(string str_, int num_, double doub_)
    {
        str = str_;
        num = num_;
        doub = doub_;
        // x=x_;
    }
};

int main()
{
    kiki k;
    k.str = "keshav";
    k.num = 3;
    k.doub = 3.7;
    // k.x="k";

    // node r = new node("kiki", 7, 7.7);

    return 0;
}