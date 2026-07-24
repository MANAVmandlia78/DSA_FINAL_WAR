#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
string s = "banana";
unordered_map<char,int> mp;
for(char ch: s){
    mp[ch] = mp[ch] + 1;
}

for(auto x : mp)
    {
        cout << x.first << " -> " << x.second << endl;
    }
}