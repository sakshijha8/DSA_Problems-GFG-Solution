//Peak Element
#include <iostream>
using namespace std;
int peakElement(int arr[], int n)
{
   // Your code here
   if(n==1){
       return n;
   }
   int l =0;
   int h = n-1;
   int m;
   while(l<= h){
       m = (l+h)/2;
       if(m==0){
           if(arr[m]>arr[m+1]){
               return m;
           }
           else{
               l = m+1;
           }
       }
       else if(m = n-1){
           if(arr[m]>arr[m-1]){
               return m;
           }
           else{
               h = m-1;
           }
       }
       else{
           if(arr[m]>arr[m-1] && arr[m]>arr[m+1]){
               return m;
           }
           else{
               if(arr[m]<arr[m+1]){
                   l = m+1;
           }
           else{
               h = m-1;
           }
           }
       }
   }
   return -1;
}
int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<peakElement(arr,n);

    return 0;
}

