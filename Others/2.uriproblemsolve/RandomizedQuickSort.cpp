#include <bits/stdc++.h>
using namespace std;

//function that rearranges the array based on the pivot
int rearrange_partition(int list[], int start, int end)
{
    int pivot = list[end];//pivot element
   
    int i = (start - 1);//smaller element's position
 
    for (int j = start; j <= end - 1; j++)
    {   //check if the array element currently is smaller than or equal to this pivot
        if (list[j] <= pivot) {
            //if so then increase the position of smaller element
            i++;
            swap(list[i], list[j]);
        }
    }

    swap(list[i + 1], list[end]);
    return (i + 1);
}


//function to choose pivot randomly
int random_partition(int arr[], int low, int high)
{
    //this generates a random number between low and high 
    srand(time(NULL));
    int random_index = low + rand() % (high - low);
    
    //swap both the elements at random_index and the last element
    swap(arr[random_index], arr[high]);
 
    return rearrange_partition(arr, low, high);
}


//function showing recursive implementation of quicksort
void randomquicksort(int list[],int start,int end){
    if(start < end) {
        int partition_index = random_partition(list, start, end);
        randomquicksort(list, start, partition_index - 1);
        randomquicksort(list, partition_index + 1, end);
    }
 }


int main(){  
int size;
cout<<"Enter the size of the array: ";
cin>>size;
int list[size];
cout<<"Enter the elements of the array: "<<endl;
for(int i=0;i<size;i++){
   cin>>list[i];
}

randomquicksort(list,0,size-1);
//after sorting
cout<<"The array elements after sorting are: "<<endl;
for(int i=0;i<size;i++){
    cout<<list[i]<<" ";
}
  
    return 0;
}