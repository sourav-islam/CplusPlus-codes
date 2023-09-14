#include <iostream>
using namespace std;

void update( int arr[], int size)
{  
    cout << "In Fuction" << endl;
    
    arr[0] = 120; // here update base address.so change both main or update fuc..cause, array pass only base address.
     for (int  i = 0; i < 3; i++)
    {
        cout << arr[i] << " " ;
    }
   
    cout << "\nOut side the function" << endl;
}
int main()
{
    int arr[3] = { 1, 5, 6};
    update(arr, 3);

    // printing the array

    for (int  i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    
}