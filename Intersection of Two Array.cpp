#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int numberofelementintersection(int a[],int n,int b[],int m){
    set<int>s;
    for(int i = 0;i<n;i++){
        s.insert(a[i]);
    }
    int count = 0;
    for(int i = 0;i<m;i++){
        int key = b[i];
        if(s.find(key)!=s.end()){
            count++;
            s.erase(key);
        }
    }
    return count;
}
int main()
{
    int a[] = {89,24,75,11,21,11};
    int b[] = {89,2,11,4};
    int n = 6;
    int m = 4;
    cout<<numberofelementintersection(a,n,b,m);
    return 0;
}

