//Given total Amount = 1330.How many need 100,50,20,1tk notes.
#include<iostream>
using namespace std;
int main()
{
    int amount = 1330;
    switch (1)
    {
    case 1: cout << "100 tk notes:" << amount/100 << endl;
             amount = amount % 100;
    case 2: cout << "50 tk notes:" << amount / 50 << endl;
             amount = amount % 50;
    case 3: cout << "20 tk notes:" << amount / 20 << endl;
             amount = amount % 20 ;
    case 4: cout << "1 tk notes:"  << amount / 1;        
    default:
        break;
    }
}