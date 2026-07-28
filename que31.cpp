#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printsubsets(int arr[],int n,int index,vector<int>& subsets){
    if(index == n){
        cout << "{";
        for(int x : subsets){
            cout << x << " ";
        }
        cout << "}" << endl;
        return ;
    }

    subsets.push_back(arr[index]);
    printsubsets(arr,n,index+1,subsets);
    subsets.pop_back();
    printsubsets(arr,n,index+1,subsets);
}

int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> subsets;
    printsubsets(arr,n,0,subsets);
}