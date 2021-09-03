#include <bits/stdc++.h> 		//code is wrong
#include<iostream> 
using namespace std;

int isPalindrome(string &str){
    int start=0,int end=strlen(&str)-1;
    if (start>=end)
    {
        return true;
    }
    else{
        return str[start]==str[end] && isPalindrome(str, start+1, end-1);
    }
}
int main()
{
    string str;
    cin>>str;
    cout<<isPalindrome(str);
    return 0;
}



#include <stdio.h>
#include <string.h>

// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
	// Start from leftmost and rightmost corners of str
	int l = 0;
	int h = strlen(str) - 1;

	// Keep comparing characters while they are same
	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			printf("%s is Not Palindrome", str);
			return;
		}
	}
	printf("%s is palindrome", str);
}

// Driver program to test above function
int main()
{
	isPalindrome("abba");
	isPalindrome("abbccbba");
	isPalindrome("geeks");
	return 0;
}
