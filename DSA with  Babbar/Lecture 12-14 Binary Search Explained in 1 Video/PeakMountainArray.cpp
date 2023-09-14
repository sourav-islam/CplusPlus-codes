
//Leetcode 852 , No : 3;
#include<iostream>
using namespace std;

int PeakIndex( int arr[], int size){
    int start = 0;
    int end = size - 1;
   int  mid = start + (end -start)/2;

    while (start < end) {
    {
        if( arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else
          end = mid;
    }
    mid = start + (end -start)/2;
 }
 return start;
}

int main(){
    int array[4] = {3, 4, 5, 1};
    int value = PeakIndex( array, 3);
    cout << " peak Index of the array is " << value << endl;
}