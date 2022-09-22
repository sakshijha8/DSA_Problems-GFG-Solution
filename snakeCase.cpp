#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string snakeCase(string S , int n)
{
        // code here
    for (int i = 0; i < n; i++)
    {
        // Converting space to underscore
        if (S.at(i) == ' '){
            S.at(i) = '_';
        }
        else{
            // If not space, convert into lower character
            S.at(i) = tolower(S.at(i));
        }
    }
     
    return S;
}
int main()
{
    string s = "Here comes the garden";
    int n = s.length();
    cout<<snakeCase(s,n);

    return 0;
}

