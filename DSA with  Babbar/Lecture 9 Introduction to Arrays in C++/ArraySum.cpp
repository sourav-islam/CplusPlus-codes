#include <iostream>
using namespace std;

int SumOfArray( int arr[], int size)
{
    int sum = 0;
    for (int  i = 0; i < size; i++)
    {
        sum = sum + arr[i];

    }
    return sum;
    
}

int main()
{  
    int size ;
    cin >> size;
    int arr[100] ;
    
    // taking values the array

    for (int  i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }

   int ans = SumOfArray( arr, size);
   cout << "Sum of array's elements:" << ans << endl;
}