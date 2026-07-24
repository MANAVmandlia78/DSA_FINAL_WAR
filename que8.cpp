#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {3, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << missingNumber(arr, n);
}