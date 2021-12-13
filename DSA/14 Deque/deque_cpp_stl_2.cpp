#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque <int> dq={1,3,5,7,9};
    auto it=dq.begin();
    it++;
    dq.insert(it,2);

    //size of deque
    cout<<"size of deque "<<dq.size()<<endl;

    //traversal
    for(auto x:dq){
        cout<<x<<endl;
    }

    
    return 0;
}