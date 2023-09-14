#include <iostream>
using  namespace std;


int FindMax( int num[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i]>max) 
        {
            max = num[i];
        }
        
    }
return max;
    
}

int FindMin(int num[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (num[i]<mini) 
        // {
        //     mini = num[i];
        // }

        mini = min(mini, num[i]);
        
    }
    return mini;
    
}

int main()
{
int size;
cin >> size;

int arr[100];
for (int  i = 0; i < size; i++)
{
    cin >> arr[i];
}

cout << "Maximum Number in Array: " << FindMax(arr, size) << endl;
cout << "Minimum Number in Array: " << FindMin(arr, size) << endl;

return 0;
}

