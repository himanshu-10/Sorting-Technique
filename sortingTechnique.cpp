#include<bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n){

    for(int i = 0;i<=n-2;i++){
        int mini = i;
        for(int j = i; j<= n-1; j++){
            if(arr[j] < arr[mini])
                mini = j;
        }
        // swap
        // int temp = arr[mini];
        // arr[mini] = arr[i];
        // arr[i] = temp;

        swap(arr[i],arr[mini]);
    }

}

void bubbleSort(int arr[],int n){

    for(int i = n-1; i>=1; i--){
        for(int j = 0; j <= i-1;j++){
            if(arr[j] > arr[j+1]){
                // swap
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void insertionSort(int arr[], int n){

    for(int i = 0; i<= n-1; i++){
        int j =i;
        while(j > 0 && arr[j-1] > arr[j]){
            // swap
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
        }
    }
}
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i] ;
    }

    // selectionSort(arr,n);
    // bubbleSort(arr,n);
    // insertionSort(arr,n);
    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" " ;
    }
   
    return 0;
}