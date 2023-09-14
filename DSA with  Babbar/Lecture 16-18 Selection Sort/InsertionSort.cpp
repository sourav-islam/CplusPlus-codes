#include<iostream>
using namespace std;
void InsSort(int ar[], int size){
    for (int i = ; i < size; i++)    {
        int temp = ar[i];
        for (int j = i-1; j>=0; j--){
            if (temp<ar[j])
            {
                /* code */
            }
            
        }
        
    }
    
}

void PrintArray(int ar[], int n){
    for(int i = 0; i < n; i++){
        cout << ar[i] <<" ";
    }
}
int main(){
    int arr[6] = {7,1,4,8,9,5};
    InsSort(arr, 6);
    PrintArray(arr, 6);
}