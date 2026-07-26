#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for(char ch : s)
    {
        // Opening brackets
        if(ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            // Stack should not be empty
            if(st.empty())
                return false;

            // Check matching bracket
            if((ch == ')' && st.top() != '(') ||
               (ch == '}' && st.top() != '{') ||
               (ch == ']' && st.top() != '['))
            {
                return false;
            }

            st.pop();
        }
    }

    return st.empty();
}

int main()
{
    string s = "([{}])";

    if(isValid(s))
        cout << "Valid";
    else
        cout << "Invalid";
}