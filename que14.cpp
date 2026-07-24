#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxprofit(int arr[],int n){
    int profit = 0;
    for(int i = 0 ; i < n; i++){
        for(int j = i+1 ; j < n ; j++){
            profit = max(profit,arr[j] - arr[i]);
        }
    }
    return profit;
}


int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxprofit(arr,n);
}