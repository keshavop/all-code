#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSquares(int N)
    {
        int i=1;
        while (i*i<=N)
        {
            i++;
        }
        return (i-1);
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