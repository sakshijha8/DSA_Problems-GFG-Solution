#include <iostream>
using namespace std;
void printarray(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
}
class solution{
    public:
    void insert(int arr[], int i)
    {
        //code here
        int j = i-1;
        int current = arr[i];
        while(j>=0 && arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        int i;
        for(i=1;i<n;i++){
            insert(arr,i);
        }
    }
};
    

int main()
{
    int arr[] = {8,4,1,5,9,2};
    int n = 6;
    solution ob;
    ob.insertionSort(arr,n);
    printarray(arr,n);

    return 0;
}

