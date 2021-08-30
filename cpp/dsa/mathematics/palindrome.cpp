#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool palindrome(int x)
{
    int rev = 0;
    int temp = x;
    while (temp != 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    return (rev == x);
}

int main()
{
    int x;
    cin >> x;
    cout << palindrome(x);
    return 0;
}