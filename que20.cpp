#include<iostream>
#include<set>
using namespace std;

string removeDuplicates(string s)
{
    set<char> st;
    string ans = "";

    for(char ch : s)
    {
        if(st.find(ch) == st.end())
        {
            st.insert(ch);
            ans += ch;
        }
    }

    return ans;
}

int main()
{
    string s = "banana";

    cout << removeDuplicates(s);
}