#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int maxOnes(bool arr[], int n){
    int res = 0, current = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0)
        {
            current = 0;
        }
        else
        {
            current++;
            res = max(res, current);
        }
    }
    return res;
}

int main(){
    int n = 7;
    bool arr[] = {0, 1, 1, 0, 1, 1, 1};
    cout<<maxOnes(arr, n);
    return 0;
}