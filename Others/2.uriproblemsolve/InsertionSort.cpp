#include<iostream>
using namespace std;

void InsertionSort( int index[] , int n){
    
    for( int i = 1; i<n; i++){
        int temp = index[i];
            int j;
        for( j = i-1; j>=0; j--){
            if ( temp < index[j])
                index[j+1] = index[j];
            else 
              break;    
        }
        index[j+1] = temp;
    }
}

void PrintArray( int arr[], int k){
    for( int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}
int main(){

    int arr[] = { 10, 1, 7, 4, 8,2,11};

    InsertionSort(arr, 7);
    PrintArray(arr , 7);
}
