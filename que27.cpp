#include<iostream>
#include<unordered_set>
using namespace std;

int longestSubstring(string s)
{
    unordered_set<char> st;

    int left = 0;
    int maxi = 0;

    for(int right = 0; right < s.length(); right++)
    {
        while(st.find(s[right]) != st.end())
        {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);

        maxi = max(maxi, right - left + 1);
    }

    return maxi;
}

int main()
{
    string s = "abcabcbb";

    cout << longestSubstring(s);
}