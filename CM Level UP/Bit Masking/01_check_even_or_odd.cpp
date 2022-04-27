// number & with 1 tell us number is odd and & with 0 tell us number is even.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n & 1){
        cout<<"ODD"<<endl;
    }
    else{
        cout<<"EVEN"<<endl;
    }
    return 0;
}