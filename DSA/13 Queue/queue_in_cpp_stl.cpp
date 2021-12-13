#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue <int> q;
    for (int i = 0; i < 60; i=i+10)
    {
        q.push(i);
    }
    // cout<<q.front()<<" "<<q.back()<<endl;
    // q.pop();
    // cout<<q.front()<<" "<<q.back()<<endl;


    // return size of queue
    cout<<q.size()<<endl;


    //traversal
    while (q.empty()==false)
    {
        cout<<q.front()<<" "<<q.back()<<endl;
        q.pop();
    }
    
    return 0;
}