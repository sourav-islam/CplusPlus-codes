#include <iostream>
using namespace std;


void PrintArray( int arr[] , int n){
     for( int i = 0; i <= n; i++)
     {
        cout << arr[i] << " ";
     }
}
void Merge( int Arr[], int l , int m, int h){
       int i = l, j = m+1; int k=l, B[h+1];
       while( i <= m && j <= h){
          if( Arr[i] <= Arr[j]){
              B[ k ] = Arr[i];
                i++ ; k++; 
            }
          else{ 
               B[k] = Arr[j];
                j++; k++;
               }
       }
      while( i <= m)
      { 
        B[k] = Arr[i];
        i++; k++;
      }  
       while( j <= h)
      { 
        B[k] = Arr[j];
        j++; k++;
      } 
      for(k = l;  k<= h ; k++)
      {
        Arr[k] = B[k];
      }
      
}

void MergeSort( int arr[] , int low , int high ){
     
       if( low < high){
        int mid = (low + high) / 2;
        MergeSort( arr, low , mid);
        MergeSort( arr, mid+1 , high);
        Merge( arr, low, mid, high);
    }
    
}




int main(){
  
   int SevenArr[] ={2,5,8,9, 15,12, 18,17}; //{9,3,7,5,6,4,8,2};
    MergeSort(SevenArr, 0 ,7);
    PrintArray( SevenArr, 7);
        
    
    // for( int i = 0; i <= 7 ; i++)
    //     {
    //         cout << SevenArr[i] << " "; 
    //     }
}