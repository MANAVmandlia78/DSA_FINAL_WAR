#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printsubarray(vector<int> &arr, vector<int> &res,int i){
if(i == arr.size()){
    for(int val:res){
        cout<< val << " ";
    }
    cout << endl;
    return;
}

res.push_back(arr[i]);
printsubarray(arr,res,i+1);
res.pop_back();
printsubarray(arr,res,i+1);
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans;

    printsubarray(arr,ans,0);
    return 0;

}