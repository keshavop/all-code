#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main()
{
    float cost,tip,tax;
    cin>>cost>>tip>>tax;
    float total_cost;
    total_cost= cost+(cost*tip/100)+(cost*tax/100);
    cout<<round(total_cost);
    return 0;
}