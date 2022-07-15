// Check if a string is subsequence of other

// Time -> ()
// Space -> ()

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Iterative

// bool isSubsequence(string s1, string s2, int m, int n)
// {
//     int j = 0;
//     for (int i = 0; i < m && j < n; i++)
//     {
//         if (s1[i] == s2[j])
//             j++;
//     }
//     return j == m;
// }


// Recursive

bool isSubsequence(string s1, string s2, int m, int n)
{
    if(m==0)
        return true;
    
    if(n==0)
        return false;

    if(s1[m-1]==s2[n-1])
        return isSubsequence(s1,s2,m-1,n-1);
    else
        return isSubsequence(s1,s2,m-1,n);
    
}

int main()
{
    string s1 = "ABCDEF";
    string s2 = "ABD";
    int m = s1.size();
    int n = s2.size();
    cout << boolalpha << isSubsequence(s1, s2, m, n);
    return 0;
}