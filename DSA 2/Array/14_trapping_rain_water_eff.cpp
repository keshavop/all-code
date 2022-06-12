// Tapping rain water problem
// we find max of left max and right max
// then we find the max water it can store

// Time  -> 0(n^2)
// Space -> 0(1)

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int getWater(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int res = 0;
//         int left[n];
//         int right[n];

//         left[0] = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             left[i] = max(arr[i], left[i - 1]);
//         }

//         right[n - 1] = arr[n - 1];
//         for (int i = n - 2; i >= 0; i--)
//         {
//             right[i] = max(arr[i], right[i + 1]);
//         }

//         for (int i = 1; i < n - 1; i++)
//         {
//             res = res + (min(left[i]), right[i]) - arr[i];
//         }
//         return res;
//     }
//     return res;
// }

// int main()
// {
//     int arr[] = {5, 0, 6, 2, 3}, n = 5;

//     cout << getWater(arr, n);
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int findWater(int arr[], int n)
{
	// left[i] contains height of tallest bar to the
	// left of i'th bar including itself
	int left[n];

	// Right [i] contains height of tallest bar to
	// the right of ith bar including itself
	int right[n];

	// Initialize result
	int water = 0;

	// Fill left array
	left[0] = arr[0];
	for (int i = 1; i < n; i++)
		left[i] = max(left[i - 1], arr[i]);

	// Fill right array
	right[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--)
		right[i] = max(right[i + 1], arr[i]);

	// Calculate the accumulated water element by element
	// consider the amount of water on i'th bar, the
	// amount of water accumulated on this particular
	// bar will be equal to min(left[i], right[i]) - arr[i] .
	for (int i = 1; i < n-1; i++)
	{
	int var=min(left[i-1],right[i+1]);
	if(var > arr[i])
	{
		water += var - arr[i];
	}
	}
		

	return water;
}

int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum water that can be accumulated is "
		<< findWater(arr, n);
	return 0;
}
