// No:2
#include <iostream>
using namespace std;

int FirstOcc(int Arr[], int size, int key){
      
      int start = 0;
      int end = size - 1;
      int mid = start + (end - start)/2;
      int ans = 0;
      while (start <= end)
      {
        if( Arr[mid] == key ){
            ans = mid;
            end = mid -1; // going left part
        }
        // Arr[mid] != key
        else if (Arr[mid] > key)
        {
            end = mid -1;
        }
        else if (Arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
        
      }
      return ans;
}
int LastOcc(int Arr[], int size, int key){
      
      int start = 0;
      int end = size - 1;
      int mid = start + (end - start)/2;
      int ans = 0;
      while (start <= end)
      {
        if( Arr[mid] == key ){
            ans = mid;
            start = mid + 1; // going left part
        }
        // Arr[mid] != key
        else if (Arr[mid] > key)
        {
            end = mid -1;
        }
        else if (Arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
        
      }
      return ans;
}


int main(){

    int arr[8] = {0 ,0 , 1, 1, 2, 2, 2, 2};
   
    int key;
    cin >> key;

    cout << "First occurrence of 2 index:" << FirstOcc( arr, 8, key) << endl;
    cout << "Last occurrence of 2 index:" << LastOcc( arr, 8, key) << endl;
    
// Question 2: Find total number of occurences of key = {LastOcc( arr, 8, key) -  FirstOcc( arr, 8, key)} + 1

cout << " Total no. of occurences:" << (LastOcc( arr, 8, key) - FirstOcc( arr, 8, key)) + 1;
}