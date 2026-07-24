#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,3,5,7};
    int arr2[] = {2,4,6,8};

    int n = 4;
    int m = 4;

    int arr3[n+m];

    for(int i = 0 ; i<n ; i++){
        arr3[i] = arr1[i];
    }

    for(int i = 0 ; i<m ; i++){
        arr3[n+i] = arr2[i];
    }

    sort(arr3 , arr3+n+m);
    for(int i = 0; i < n+m ; i++){
        cout << arr3[i] << " ";
    }
}