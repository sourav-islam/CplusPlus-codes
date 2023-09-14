//No:1
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
     int start = 0;
     int end = size - 1;
     int mid = (start + end)/2;

     while (start <= end)
     {
        if (arr[mid] == key) {
            return mid;
        }
        else{
              if (key > arr[mid])
              {
                start = mid + 1;
               
              }
              else {
                end = mid - 1;
                
              }
            mid = start + (end - start)/2;  
        }
        
     }
   
    return -1; 
}

int main(){

    int evenArr[8] = { 2, 8, 12, 13, 16,19,25,27};
    int key ;

     cout << "Type the key to find:" << endl;
     cin >> key ;
      
    int found = BinarySearch( evenArr, 8, key);
   
    
        cout << found << endl;
    
   
    
    
}