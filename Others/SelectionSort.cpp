#include<iostream>
using namespace std;
void SelectionSort(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;
        for( int j = i+1; j < size; j++){
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            
        }
        swap( arr[minIndex],arr[i] );
    }
    
}
void PrintArray( int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
    int SixArr[6] = { 7,1,4,3,11,9,};
    SelectionSort( SixArr, 6);
    PrintArray( SixArr, 6);
}