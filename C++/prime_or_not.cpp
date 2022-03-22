// check number is prime or not

#include <iostream>
using namespace std;

bool prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    prime(n);
    if (prime(n) == 1)
    {
        cout << "prime number" << endl;
    }
    else
    {
        cout << "not prime number" << endl;
    }
    return 0;
}