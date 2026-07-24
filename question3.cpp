#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool issorted(vector<int> arr){
    for(int i = 1; i<arr.size() ; i++){
if(arr[i-1] > arr[i]){
    return false;
    break;
}
    }
    return true;
}

int main(){
    vector<int> arr = {1,2,3,5,4};
    if(issorted(arr)){
        cout<<"Sorted";
    }else{
        cout<<"unsorted";
    }
}