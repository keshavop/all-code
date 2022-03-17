// Sort in C++ using comparator func

#include <iostream>
#include <algorithm>
using namespace std;

struct Point
{
    int x, y;
};

bool compare(Point p1, Point p2)
{
    return p1.x > p2.x;
}

int main()
{
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n, compare); // sort func in increasing order
    for (auto i : arr)
    {
        cout << i.x << " " << i.y << endl;
    }

    return 0;
}