/*You are required to implement the following Function 

def LargeSmallSum(arr)

The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest  element from the even positions and second smallest from the odd position of given ‘arr’

Assumption:

All array elements are unique
Treat the 0th position as even
NOTE

Return 0 if array is empty
Return 0, if array length is 3 or less than 3
Example

Input

arr:3 2 1 7 5 4

Output

7*/
//Code:
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int LargeSmallSum(int arr[],int n){
    int i,j,temp;
    int even[n],odd[n];
    int even_count = 0;
    int odd_count = 0;
    if(n<=3){
        return 0;
    }
    else{
        even[0] = arr[0];
        even_count = 1;
        for(int i = 1;i<n;i++){
           if(i%2==0){
              even[even_count] = arr[i];
              even_count++;
        }
            else{
               odd[odd_count] = arr[i];
               odd_count++;
        }
    }
    }
    //sorting of even_count elements
    for(i = 0;i<even_count;i++){
        for(j=i+1;j<even_count;j++){
            if(even[i]>even[j]){
                temp = even[i];
                even[i]=even[j];
                even[j] = temp;
            }
        }
    }
    //sorting of odd_count elements
    for(i = 0;i<odd_count;i++){
        for(j=i+1;j<odd_count;j++){
            if(odd[i]>odd[j]){
                temp = odd[i];
                odd[i]=odd[j];
                odd[j] = temp;
            }
        }
    }
    return (even[even_count-2]+odd[1]);
}
int main()
{
    int arr[] = {1,8,0,2,3,5,6};
    int n = 7;
    cout<<LargeSmallSum(arr,n);
    return 0;
}

