#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
        cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10;
        if (a1 + a3 + a5 + a7 + a9 > a2 + a4 + a6 + a8 + a10)
        {
            cout << "1" << endl;
        }
        else if (a1 + a3 + a5 + a7 + a9 < a2 + a4 + a6 + a8 + a10)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "0" << endl;
        }

        n--;
    }

    return 0;
}