#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reversearray(vector<int> &arr){
    int n = arr.size();
    int i = 0;
    int j = n-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5};

    reversearray(arr);

    for(int i = 0; i < arr.size() ; i++){
        cout<<arr[i];
    }
}