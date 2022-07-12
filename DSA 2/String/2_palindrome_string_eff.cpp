// Palindrome in string eff

// Time -> ()
// Space -> ()

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
    int start = 0;
    int end = str.length()-1;
    while (start<end)
    {
        if(str[start]!=str[end])
            return false;
        
        start++;
        end --;
    }
    return true;
}

int main()
{
    string str = "ABBA";
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