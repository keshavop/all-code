#include <bits/stdc++.h>
using namespace std;
void print2largest(int arr[], int arr_size)
{
	int i, first, second;
	if (arr_size < 2)						// There should be atleast two elements
	{
		cout << " Invalid Input ";
		return;
	}

	first = second = INT_MIN;
	for(i = 0; i < arr_size; i++)
	{
	if (arr[i] > first){						// If current element is greater
		second = first;							// than first then update both
		first = arr[i];							// first and second
	}
	
	else if (arr[i] > second && arr[i] != first)		// If arr[i] is in between first
	{													// and second then update second
		second = arr[i];
	}
	}
	if (second == INT_MIN)
		cout << "There is no second largest"
				"element\n";
	else
		cout << "The second largest element is "
			<< second;
}

int main()
{
	int arr[] = { 12, 35, 1, 10, 99, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	print2largest(arr, n);
	return 0;
}
