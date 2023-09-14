#include<iostream>
#include<array>
using namespace std;
int main(){
   // int staticArray[3] = { 1,2,3};
  
   //Dynamic array
   array<int , 4> arr = {3,12,10,6};
   int size = arr.size();
   cout << " size-> " << size << endl;
  
   // print Array
   cout << "Print the Array" << endl;
   for( int i = 0; i < size; i++){
      cout << arr[i] << " ";
   }cout << endl;

   //Specific index print
   cout << "Element of 2nd index " << arr.at(2) << endl;
   cout << "Array is empty of not " << arr.empty() << endl; // true -1, false- 0
   cout << "First element" << arr.front()<< endl;
   cout << "Last element" << arr.back() << endl;

   //Random access Iterator
   array< int ,4>:: iterator it = arr.begin();
   cout << *it <<"\n";
   cout << * it+2 << "\n";
   cout << *arr.end()<< endl; //something random
   cout << *(arr.end()-1) <<"\n";
   cout << *arr.begin() << endl;
    cout << arr.end()-arr.begin() << endl;
}    