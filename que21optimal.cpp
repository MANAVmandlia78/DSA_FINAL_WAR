#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isanargam(string s,string t){
    if(s.length() != t.length()){
        return false;
    }

    unordered_map <char,int> mp;

    for(char ch : s){
        mp[ch] = mp[ch] + 1;
    }

    for(char ch : t){
        mp[ch] = mp[ch] - 1;
    }

    for(auto x : mp){
        if(x.second != 0){
            return false;
        }
    }

    return true;


}

int main(){
    string s = "listen";
    string t = "silent";

    if(isanargam(s,t)){
        cout<< "Anargam";
    }else{
        cout<< "not anargam";
    }
}