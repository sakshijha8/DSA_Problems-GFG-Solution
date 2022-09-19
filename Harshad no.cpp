//Harshad number
//81 = 8+1=9, 81%9==0,Yes it is harshad number
#include <iostream>
using namespace std;
int Sumofdigits(int n){
    int sum = 0;
    while(n!=0){
        int last = n%10;
        sum = sum+last;
        n = n/10;
    }
    return sum;
    
}
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    if(number%Sumofdigits(number)==0){
        cout<<"It is Harshad Number";
    }
    else{
        cout<<"Not,an Harshad Number";
    }
    return 0;
}

