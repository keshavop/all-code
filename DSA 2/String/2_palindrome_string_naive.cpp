// Palindrome in string Naive

// Time -> ()
// Space -> ()

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
    string rev = str;
    reverse(str.begin(), str.end());
    return rev == str;
}

int main()
{
    string str = "AbBA";
    if (isPalindrome(str) == 0)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }

    return 0;
}