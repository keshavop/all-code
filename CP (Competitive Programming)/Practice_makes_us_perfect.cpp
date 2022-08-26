// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     int count = 0;
//     if (a >= 10)
//     {
//         count++;
//     }
//     if (b >= 10)
//     {
//         count++;
//     }
//     if (c >= 10)
//     {
//         count++;
//     }
//     if (d >= 10)
//     {
//         count++;
//     }

//     cout << count << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for (int i = 0; i < 4; i++)
    {
        if(arr[i]>=10){
            count++;
        }
    }
    
    cout<<count<<endl;

    return 0;
}