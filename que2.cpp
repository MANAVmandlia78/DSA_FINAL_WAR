#include<bits/stdc++.h>
#include<iostream>


using namespace std;

int secondLargest(int arr[],int n){
    int largest = arr[0];
    int second = INT_MIN;

    for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            second =  largest;
            largest = arr[i];
        }else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    return second;
}



int main(){
    int arr[] = {4,7,1,9,3};
    int n = 5;
    cout<<secondLargest(arr,n);
}