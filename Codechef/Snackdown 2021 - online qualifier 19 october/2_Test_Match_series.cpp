#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int draw = 0, india = 0, england = 0;
        int r = 0;
        for (int i = 0; i < 5; i++)
        {
            cin >> r;
            if (r == 0)
            {
                draw++;
            }
            else if (r == 1)
            {
                india++;
            }
            else
            {
                england++;
            }
        }
        if (india == england)
        {
            cout << "Draw" << endl;
        }
        else if (india > england)
        {
            cout << "INDIA" << endl;
        }
        else
        {
            cout << "ENGLAND" << endl;
        }

        t--;
    }

    return 0;
}