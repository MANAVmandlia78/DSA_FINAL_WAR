#include<iostream>
using namespace std;

bool palindrome(string s)
{
    string rev = "";

    for(int i = s.length()-1; i >= 0; i--)
        rev += s[i];

    return s == rev;
}

int main()
{
    string s = "madam";

    if(palindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}