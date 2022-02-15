#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    cout << arr.size() << endl; // size is zero

    arr.push_back(0); // inserting elements
    arr.push_back(2);

    arr.pop_back(); // delete the last element in vector

    arr.clear(); // clear the whole elements of vector

    // initiliase all elements with zero
    //  here 4 is size of vector and zero is the value of all elements
    vector<int> vec(4, 0); //->{0,0,0,0}

    // copy a vector
    vector<int> vec1(4, 0);
    vector<int> vec2(4, 1);

    vector<int> vec3(vec2.begin(), vec2.end()); // this will copy 1st to n-1 elements
    // ->[ )

    vector<int> vec3(vec2); // this will copy 1st to n elements

    return 0;
}