#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int s,int e){

    int pivot = arr[s];
    //! number of element less than pivot
    int cnt = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i] <= pivot)
            cnt++;
    }

    //! place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[s],arr[pivotIndex]);

    //todo: element less than pivot in left place
    //todo:  elemtn greater than pivot in right place

    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;

}

void quickSort(int *arr,int s,int e){

    // base case
    if(s>=e)
        return;

    int p = partition(arr,s,e);

    // left part sort krenge
    quickSort(arr,s,p-1);
    // right part se krnege
    quickSort(arr,p+1,e);
}
int main(){


    // int arr[5] = {2,4,1,6,9};
    // int n = 5;

    int arr[8] = {9,3,7,5,6,4,8,2};
    int n = 8;

    quickSort(arr,0,n-1);

    // print sorted array
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }



    return 0;

}