#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int grade, rem;
    for (int i = 0; i < n; i++)
    {
        cin >> grade;
        if (grade >=38){
            rem = grade % 5;
            if (rem >= 3)
            {
            grade += 5-rem;
            }
        }
        cout << grade << endl;
    }
    return 0;
}
