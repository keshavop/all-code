// permutations with duplicates allowed
#include <bits/stdc++.h>
using namespace std;
// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
void permute(string a, int l, int r){
	if (l == r)         	// Base case
		cout<<a<<endl;
	else{
		for (int i = l; i <= r; i++)        // Permutations made
		{
			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permute(a, l+1, r);
			//backtrack
			swap(a[l], a[i]);
		}
	}
}

int main()
{
	string str = "ABC";
	int n = str.size();
	permute(str, 0, n-1);
	return 0;
}
