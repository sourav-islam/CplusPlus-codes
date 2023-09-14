#include<iostream>
using namespace std;
int main(){
     
    int a = 3;
     cout << a <<endl;

     if (true)
     { 
        int a= 5;
        cout<< a << endl;
        // int a= 6; // redeclaration of a not allowed
        // cout <<a ;
     }

     cout << a;

     if (true)
     {
        int b = 7;
        cout << b << endl;
     }
    //  cout << b << endl;
    // b was not declared in this scope
     
     

}