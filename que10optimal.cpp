#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[],int n){
    vector<int> ans;
    int maxRight = arr[n-1];
    ans.push_back(maxRight);

    for(int i = n-2 ; i >= 0 ; i--){
        if(arr[i] > maxRight){
            ans.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    reverse(ans.begin(),ans.end());
    return ans;
}



int main(){
    int arr[] = {10,22,12,3,0,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> ans = leaders(arr,n);

    for(int x: ans){
        cout<< x << " ";
    }
}