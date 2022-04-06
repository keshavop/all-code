/*
Largest and Smallest Number.
Given an array A of integers.

Implement a function which takes A as argument and returns the largest and smallest number in the array.

Sample Input

9 8 8 5 3 2 0

4 3 4 2 1

Sample Output

9 0

4 1



Explanation :

for test case one, largestElement is 9 & smallestElement is 0

Similarly for test case two, largestElement is 4 & smallestElement is 1.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    return 0;
}