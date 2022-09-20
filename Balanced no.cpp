#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int balacedno(string s){
    int leftsum = 0;
    int rightsum = 0;
    for(int i = 0;i<s.size()/2;i++){
        leftsum +=int(s[i]-'0');
        rightsum +=int(s[s.size()-1-i]-'0');
    }
    if(leftsum==rightsum){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    string s = "1234006";
    if(balacedno(s)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }

    return 0;
}

