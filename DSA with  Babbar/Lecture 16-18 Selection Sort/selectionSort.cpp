#include <iostream>
using namespace std;

void printArray(int ar[], int size)
{
    for (int k = 0; k < size; k++)
    {
        cout << ar[k] << " ";
    }
}
void SelectionSort(int array[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[minIndex])
            {

                minIndex = j;
            }
        }
        //swap(array[i], array[minIndex]);
            // swaping with temporary variable
        
        int temp = array[i];
             array[i] = array[minIndex];
             array[minIndex] = temp;
    }
}

int main()
{
    int arr1[9] = {7, 1, 4, 3, 9,11,15,2,6};
    SelectionSort(arr1, 9);
    printArray(arr1, 9);
}