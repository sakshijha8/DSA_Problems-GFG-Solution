//Majority Element By Moore Voting Algorithm   -->Time Complexity : O(N) --> Space Complexity: O(1)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[], int size)
    {
        //Ist step
        int count = 1,res = 0;
        for(int i=1;i<size;i++){
            if(a[res]==a[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                count = 1;
                res = i;
            }
        }
        
        //2nd step
        count =0;
        for(int i =0 ;i<size;i++){
            if(a[res]==a[i]){
                count++;
            }
        }
        if(count<=(size/2)){
            return -1;
        }
        else{
            return a[res];
        }
        
    }
int main()
{
    int a[] = {8,8,6,6,6,4,6};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Majority Element is : "<<majorityElement(a,n);

    return 0;
}

