#include<iostream>
using namespace std;

void heapify( int arr[] , int n, int i){
    int large = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if( l<n && arr[l] > arr[large])
        large = l;
    if( r< n && arr[r] > arr[large])
        large = r;

    if ( large != i){
        swap( arr[large] ,arr[i]);
        heapify( arr , n , large);
    }  
}
  
  void HeapSort( int arr[] , int n){
     for ( int i = n/2 -1; i>= 0 ; i--){
        heapify( arr , n, i);
     }
     for( int i = n-1 ; i>= 0; i--){
        swap( arr[i], arr[0]);
        heapify ( arr, i, 0);
     }
  }   

  void PrintArray(int arr[], int n ){
    for(int i= 0; i < n ; i++)
    cout << arr[i] << " ";
  }   

int main(){
    int arr[] = { 60, 20, 40, 70,30,10, 25,90,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    for( int i = n/2 -1; i>=0; i--){
        heapify( arr , n , i);
    }
    cout << " Before heapsort" << endl;
    PrintArray( arr, n);
    
    HeapSort( arr , n );
    cout << " After heapsort" << endl;
    PrintArray( arr , n);
}