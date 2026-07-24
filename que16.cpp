#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void reverse(string &s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
}

int main(){
    string s = "hello";
    reverse(s);
    cout << s;
}