/* star pattern

*
**
***
****

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int stars = 1;
        while (stars <= i)
        {

            cout << "*";
            stars++;
        }
        cout << endl;
        i++;
    }
    return 0;
}