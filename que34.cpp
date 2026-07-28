#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n,int k,int index, vector<int> &current){
    if(current.size() == k){
        cout << "{ ";
        for(int x: current){
            cout << x << " ";
        }
        cout << "}" << endl;
        return;
    }

    if(index==n)
    return;

    current.push_back(arr[index]);
    solve(arr,n,k,index+1,current);
    current.pop_back();
    solve(arr,n,k,index+1,current);
}

int main(){
    int arr[] = {1,2,3,4};
    int n = 4;
    int k = 2;

    vector<int> current;

    solve(arr,n,k,0,current);
    return 0;
}