#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    bool check = false;
    if (n == 4 || n == 7)
    {
        check = true;
    }
    
    // while (n > 10)
    // {
    //     n = n / 10;
    //     if (n == 4 || n == 7)
    //     {
    //         check = true;
    //     }
    // }
    if (check == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}