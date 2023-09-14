  // This program prints Welcome to Java! 
public class Welcome {
public static void main(String[] args) { 
System.out.println("Welcome to Java!");
}
}




int Partition(int arr[], int l, int h)
{    
    int pivot = arr[l];
    int i =l, j= h;
    while( i < j){
        do{i++;}
        while( arr[i] <= pivot );
        do{ j--;}
        while(arr[j] > pivot);
        if( i<j){
            //swap( arr[i],arr[j]);
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j]= temp;
        }
    }
    //swap( arr[l] , arr[j]);
    int temp = arr[l];
            arr[l]= arr[j];
            arr[j]= temp;
    return j;
}

void QuickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = Partition(arr, l, h);

        QuickSort(arr, l, p);
        QuickSort(arr, p+1, h);
    }
}
#include<iostream>
int main()
{
    int Arr[] = {10, 1, 2, 5, 7, 3, 9, 8};

    
    QuickSort(Arr, 0, 8);
    for( int i = 0; i<=7 ; i++){
        std::cout << Arr[i] << " ";
}
}
