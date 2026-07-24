#include<iostream>
using namespace std;

void productExceptSelf(int arr[], int n)
{
    int left[n];
    int right[n];
    int ans[n];

    left[0] = 1;

    for(int i = 1; i < n; i++)
        left[i] = left[i-1] * arr[i-1];

    right[n-1] = 1;

    for(int i = n-2; i >= 0; i--)
        right[i] = right[i+1] * arr[i+1];

    for(int i = 0; i < n; i++)
        ans[i] = left[i] * right[i];

    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
}

int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    productExceptSelf(arr,n);
}