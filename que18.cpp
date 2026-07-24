#include<iostream>
using namespace std;

int main()
{
    string s = "Hello";

    int vowels = 0;
    int consonants = 0;

    for(char ch : s)
    {
        ch = tolower(ch);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants;
}