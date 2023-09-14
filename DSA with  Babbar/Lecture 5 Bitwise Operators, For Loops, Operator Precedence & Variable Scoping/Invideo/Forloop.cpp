#include<iostream>
using namespace std;
int main(){
        int n;
        cout << "Enter the value of n" << endl;
        cin >> n;
        int i = 1;
       for (;; )
       {
         if (i<=n){
          cout << "happy" << endl;
           //i++; loop doesn't infinite.
         }
         else
         {
          break; 
         }
         i++;
       }  

       // using multiple conditions in for loop

       for( int a = 0 , b = 1; a++<=0 && --b<=0; a++, b++)
       {
        cout <<"Find Output of a & b:" << a << " " << b << endl;
       }

       for ( int a = 0, b = 1, c = 2; a>=0 && b>=1 && c>=2 ; a--, b--, c--)
       {
        cout << "Find Output of a & b & c:" << a << " " <<  b << " " << c ;
       }
        
}
