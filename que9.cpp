#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int maxsubarray(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
sum = sum + arr[j];
maxi = max(sum,maxi);
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxsubarray(arr, n);
}