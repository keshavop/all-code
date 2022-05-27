#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSquares(int N)
    {
        int low = 1;
        int high = N;
        long long int ans = 0;
        while (low <= high)
        {
            long long int mid = (low + high) / 2;
            long long int msq = mid * mid;
            if (msq == N)
            {
                return mid;
            }
            else if (msq > N)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}