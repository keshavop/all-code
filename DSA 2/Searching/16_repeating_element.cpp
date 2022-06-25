// repeating element in an array
// 2 pointer approach

// Time -> O(N)
// Space -> O(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findDuplicate(vector<int> arr)
{
    int slow = arr[0];
    int fast = arr[0];
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    fast = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main()
{
    vector<int> arr{1, 3, 2, 4, 3, 3};
    cout << findDuplicate(arr);
    return 0;
}