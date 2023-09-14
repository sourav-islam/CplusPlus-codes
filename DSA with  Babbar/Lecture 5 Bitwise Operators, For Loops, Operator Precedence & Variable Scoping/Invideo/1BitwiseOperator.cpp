#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 4;
    //  a = 2  10
    //  b = 4 100

    cout << "a&b " << (a&b) << endl;
    cout << "a|b " << (a|b) << endl;
    cout << "~a " << (~a) << endl;
    cout << "a^b " << (a^b) << endl;


    // Left-shift and right-shift operators
    // << n*2   and >> n/2
    cout << "Left-Right shift OP"<<endl;
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (19 << 2) << endl;

    // Increment and decrement
    //pre i/d ++i/--i
    //post i/d i++/i--

    int i = 4;
    cout << "Increment and decrement" <<endl;
    cout << ++i << endl; 
    cout << i++ << endl;
    cout << i-- << endl;
    cout << --i << endl;

}

