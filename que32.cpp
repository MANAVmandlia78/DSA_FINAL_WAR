#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string &s,vector<bool> &used,string &current){
    // s = "ABC" , used = [f,f,f] , current = " "
    if(current.length() == s.length()){
        cout<< current << endl;
        return;
    }

    for(int i = 0; i < s.length() ; i++){
        if(used[i] == true){ 
            continue;// skip the current iteration and move to next i = 0
        }else{
            used[i] = true; // used = [T,F,F] iter 2 -used = [T,T,F]
            current = current + s[i];// current = " " + "A"
            solve(s,used,current); // solve("abc",[T,F,F],"a")
            current.pop_back();// current = " "
            used[i] = false; // used[f,f,f]

        }
    }
}

int main(){
    string s = "ABC";// a-> 0 , b-> 1 ,c-> 2
    vector<bool> used(s.length(), false);// [F,F,F]
    string current = "";
    solve(s,used,current); 
}