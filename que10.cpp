#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[],int n){
for(int i = 0 ; i < n ; i++){
    bool isleader = true;
    for(int j = i+1; j<n ;j++){
        if(arr[j]>arr[i]){
            isleader = false;
            break;
        }
    }
    if(isleader){
     cout << arr[i] << " ";
    }
}
}

int main(){
    int arr[] = {10,22,12,3,0,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    leaders(arr,n);
    return 0;
}