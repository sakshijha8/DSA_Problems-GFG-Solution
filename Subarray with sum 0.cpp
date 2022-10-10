// Subarray with sum 0
#include<bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[], int n)
    {
        //Your code here
        set<int> s;
        int pre_sum = 0;
        for(int i=0;i<n;i++){
            pre_sum +=arr[i];
            if(pre_sum==0){
                return true;
            }
            if(s.find(pre_sum)!=s.end()){
                return true;
            }
            s.insert(pre_sum);
        }
        return false;
    }
int main()
{
    int arr[] = {4, 2, -3, 1, 6};
    int n = 5;
    cout<<subArrayExists(arr,n);

    return 0;
}

