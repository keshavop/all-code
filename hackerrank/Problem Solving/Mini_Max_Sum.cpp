#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long long int sum(long long int arr[], long long int n)
{
    long long int largest = LONG_MIN;
    long long int smallest = LONG_MAX;
    for (long long i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    long long int sum = 0, minSum = 0, maxSum = 0;

    for (long long int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    // cout << sum << endl;
    minSum = sum - largest;
    maxSum = sum - smallest;
    cout << minSum << " " << maxSum;
    return 0;
}
int main()
{
    long long int n = 5;
    long long int arr[5];
    for (long long int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    sum(arr, n);
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int arr[5];
//     long long int total = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//         total += arr[i]; //total sum of all five int
//     }

//     int *max;
//     int *min;
//     max = max_element(arr, arr + 5); //find max int in array
//     min = min_element(arr, arr + 5); //find min int in array

//     long long int maxsum;
//     long long int minsum;
//     maxsum = total - *min; // maximum sum of 4 int is =total - min int
//     minsum = total - *max; //minimum sum of 4 int is =total -max int

//     cout << minsum << " " << maxsum << endl;
// }