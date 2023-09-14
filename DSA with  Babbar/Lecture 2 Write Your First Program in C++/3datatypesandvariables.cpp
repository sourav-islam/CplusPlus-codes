#include<iostream>
using namespace std;
int main()
{
    int a=123;
    cout << a << endl;
    
    bool bl= true;
    cout << bl << endl;

    float x=1.3445577; //in c++ float & double read 5 digits after . point so ans 1.34456
    cout << x << endl;

    double y=1.3445655454;
    cout << y << endl;

    char ch='A';  //char ='AB'; not allowed,error found. char only read single character.    
    cout << ch << endl;

    // char ch1='AB';
    // cout << ch1 << endl;

    // Size Operator(sizeof)
   
    cout << "Size operator(sizeof):" << endl;

   int size = sizeof(a);
   cout << "Size of int: " << size << " bytes" << endl;  //check the line

   int charsize = sizeof(ch);
   cout << "Size of Char: " << charsize << endl;
   

   int boolsize = sizeof(bl);
   cout << "Size of Bool: " << boolsize << " bit" << endl;

   int floatsize = sizeof(x);
   cout << "Size of Float: " << floatsize << endl;

   int doublesize = sizeof(y);
   cout << "Size of Double: " << doublesize << endl;
 
}