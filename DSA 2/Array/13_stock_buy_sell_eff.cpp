// Stock buy and sell eff
// if prices is increasing we add up 

// Time  -> 0(n)
// Space -> 0(1)

#include <iostream>
using namespace std;

int maxProfit(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i - 1])
        {
            profit = profit + (price[i] - price[i - 1]);
        }
    }
    return profit;
}

int main()
{
    int arr[] = {7,1,5,3,6,4}, n = 6;

    cout << maxProfit(arr, n);
}