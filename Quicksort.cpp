#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int h){
    int pivot = arr[l];
    int i =l;
    int j = h;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[l]);
    return j;
}
void quicksort(int arr[],int l,int h){
    //check krenge ki 2 element se jyada hjai tbhi aage jaye
    if(l<h){
        int pivot = partition(arr,l,h);
        //for left half
        quicksort(arr,l,pivot-1);
        //for right half
        quicksort(arr,pivot+1,h);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {4,6,2,5,7,9,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}

