#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char firstnonrepeating(string s){
    unordered_map <char,int> mp;

    for(char ch : s){
        mp[ch] = mp[ch] + 1;
    }

    for(char ch : s){
        if(mp[ch] == 1){
            return ch;
        }
    }

    return '#';
}

int main(){
    string s = "loveleetcode";
    char ans = firstnonrepeating(s);

    if(ans == '#'){
        cout<< "-1";
    }else{
        cout << ans;
    }
}