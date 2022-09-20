#include <iostream>
using namespace std;
int checkabundant(int num){
    int sum = 0;
    for(int i = 1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
            else{
                sum = sum;
            }
        }
    
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = checkabundant(n);
    if(sum>n){
        cout<<"It is an Abundant Number";
    }
    else{
        cout<<"It is not an Abundant Number";
    }
    

    return 0;
}

