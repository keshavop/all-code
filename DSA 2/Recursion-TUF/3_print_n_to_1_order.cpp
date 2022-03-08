// Print name n to 1 using recursion

//Time  -> 0(n)
//Space -> 0(n)

#include <iostream>
using namespace std;

int print(int i, int n)
{
    if(i<1){
        return -1;
    }
    cout<<i<<" ";
    i--;
    print(i,n);
}

int main()
{
    int i=10;
    int n=1;
    print(i,n);

    return 0;
}