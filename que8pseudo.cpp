#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int missingnumber(int arr[],int n){
    int hash[4] = {0};
    for(int i = 0 ; i<n ; i++){
hash[arr[i]] = hash[arr[i]] + 1;
    }

    for(int i = 0;i<n;i++){
        if(hash[i]==0){
return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {3,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << missingnumber(arr,n);
}