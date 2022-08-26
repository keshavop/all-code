#include <bits/stdc++.h>
using namespace std;

int main()
{
    int twox, onex, play;
    int x, y;
    cin >> x >> y;
    twox = y / 2;
    onex = x - y;
    play = onex + twox;
    cout << play;
    return 0;
}