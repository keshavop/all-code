/*
star pattern

    *
   ***
  *****
 *******

*/

#include <iostream>
using namespace std;

int pattern(int n)
{
    for (int i = 1; i < n; i++)
    {
        // spaces
        for (int spaces = 1; spaces <= n - i; spaces++)
        {
            cout << " ";
        }
        // stars
        for (int stars = 1; stars <= 2 * i - 1; stars++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    pattern(n);
    return 0;
}