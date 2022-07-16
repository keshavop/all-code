// Check for anagram

// Time -> ()
// Space -> ()

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int CHAR = 256;
bool isAnagram(string s1, string s2)
{
    if (s1.size() != s2.size())  //if size is not equal then false
    {
        return false;
    }
    int count[CHAR] = {0};
    for (int i = 0; i < s1.length(); i++)   
    {
        count[s1[i]++];
        count[s2[i]--];
    }

    for (int i = 0; i < CHAR; i++)  // if char array is not empty then false
    {
        if (count[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1 = "listen";
    string s2 = "silent";

    cout << boolalpha << isAnagram(s1, s2);
    return 0;
}