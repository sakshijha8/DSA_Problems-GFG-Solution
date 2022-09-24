#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution{
    public:
    int kadene(int arr[],int num){
        int sum = 0;
        int maxsum = INT_MIN;
        for(int i =0;i<num;i++){
            sum += arr[i];
            if(sum < 0){
                sum = 0;
            }
            maxsum = max(maxsum,sum);
        }
        return maxsum;
    }
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int nonwrapsum = kadene(arr,num);
        if (nonwrapsum < 0){
            return nonwrapsum;
        }
        int totalsum = 0;
        int wrapsum = 0;
        for(int i = 0; i <num;i++){
            if(arr[i]<0){
                wrapsum++;
            }
            totalsum += arr[i];
            arr[i] = -arr[i];
        }
        totalsum = totalsum + kadene(arr,num);
        if(wrapsum==num){
            return arr[0];
        }
        if(nonwrapsum<totalsum){
            return totalsum;
        }
        return nonwrapsum;
    }
    
};

int main()
{
    int arr[] = {-3, -18, -22, -21, -17, 16,-14, 28, -22};
    int num = 9;
    Solution obj;
    cout<<"Maximum Circular Sub-Array Sum is : ";
    cout<<obj.circularSubarraySum(arr,num);
    return 0;
}

