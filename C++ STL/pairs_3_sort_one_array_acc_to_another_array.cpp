// Sort one array according to another array using pairs

#include <iostream>
#include <algorithm>
using namespace std;

void Sort(int a[], char b[], int n)
{
    pair<int, char> pa[n];

    for (int i = 0; i < n; i++)
    {
        pa[i].first = a[i];
        pa[i].second = b[i];
    }

    sort(pa, pa + n);

    for (int i = 0; i < n; i++)     // printing first array
    {
        cout << pa[i].first << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++)     // printing second array
    {
        cout << pa[i].second << " ";
    }
}

int main()
{
    int a[] = {2, 1, 5, 4, 9, 3, 6, 7, 10, 8};
    char b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int n = sizeof(a) / sizeof(a[0]);       //determine size

    Sort(a, b, n);      // func calling

    return 0;
}