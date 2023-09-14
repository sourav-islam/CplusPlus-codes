#include <iostream>
using namespace std;

bool LinearS(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[7] = {5, 10, -5, 3, 6, 8, 1};
    int key;
    cin >> key;
    // bool found =  LinearS(arr, 7,key);
    if (LinearS(arr, 7, key)) // if(found)
    {
        cout << "Key is present in the array" << endl;
    }
    else
        cout << "Key is not present in the array" << endl;
}