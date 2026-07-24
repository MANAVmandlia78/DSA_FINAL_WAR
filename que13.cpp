#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majorityelement(int arr[], int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] = mp[arr[i]] + 1;
        if (mp[arr[i]] > n / 2)
        {
            return arr[i];
        }

    }
    return -1;
}

int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << majorityelement(arr, n);
}