#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int target){
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid -1;
        }
    }
    
}

int main(){
    int arr[] = {2,4,6,8,10,12,14};
    int n = 7;
    int target = 10;
    cout << binarysearch(arr,n,target);
}