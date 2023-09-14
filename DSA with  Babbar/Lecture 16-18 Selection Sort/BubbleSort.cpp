#include <iostream>
using namespace std;

void PrintArr(int arr[], int size)
{
   for (int k = 0; k < size; k++)
   {
      cout << arr[k] << " ";
   }
}

void BubbleSort(int arr[], int n)
{

   for (int i = 1; i < n; i++)
   {
     // for (int j = 1; j <= n - i; j++)
     // can't take j= 1, because inner loops access the array and index start with 0;
      
      for (int j = 0; j <= n - i; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            swap(arr[j], arr[j + 1]);
         }
      }
   }
}
int main()
{
   int SixArr[6] = {10, 1, 7, 6, 14, 9};
   BubbleSort(SixArr, 6);
   PrintArr(SixArr, 6);
}