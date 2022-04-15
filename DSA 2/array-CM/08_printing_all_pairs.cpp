// printing all pairs
// Time - 0(n^2)
// Space - 0(1)

#include <iostream>
using namespace std;

int all_pairs(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            int y = arr[j];
            cout << x << "," << y << endl;
        }
        cout<<endl;
    }
}

int main()
{
    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};
    all_pairs(n, arr);
    return 0;
}