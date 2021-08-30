#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a1, b1, c1;
        cin >> a1 >> b1 >> c1;
        int sum1 = a1 + b1 + c1;
        int a2, b2, c2;
        cin >> a2 >> b2 >> c2;
        int sum2 = a2 + b2 + c2;

        if (sum1 > sum2)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
        n--;
    }

    return 0;
}