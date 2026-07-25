#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isanargam(string s,string t){
    if(s.length() != t.length()){
        return false;
    }

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t){
        return true;
    }else{
        return false;
    }
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