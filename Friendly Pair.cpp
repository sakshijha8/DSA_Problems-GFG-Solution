#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int friendlypair(int n){
    int sum = 0;
    for(int i = 1;i<sqrt(n);i++){
        if(n%i==0){
            if(i==1){
                sum = sum + i;
            }
            else if(i==n/i){
                sum = sum + i;
            }
            else{
                sum = sum + i+n/i;
            }
        }
    }
    return sum;
}
int main()
{
    int num1,num2;
    cout<<"Enter the num1 : ";
    cin>>num1;
    cout<<"Enter the num2 : ";
    cin>>num2;
    int sum1 = friendlypair(num1);
    int sum2 = friendlypair(num2);
    if(sum1/num1==sum2/num2){
        cout<<"Friendly pair";
    }
    else{
        cout<<"Not,Friendly Pair";
    }
    return 0;
}

