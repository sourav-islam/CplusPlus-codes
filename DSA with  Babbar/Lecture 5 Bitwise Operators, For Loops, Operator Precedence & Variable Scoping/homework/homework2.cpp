#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
   /* if (a-- > 0 && ++b >2) 
    {
        cout << "Stage1 - Inside If";
    }
    else
    {
        cout << "Stage2 - Inside else";
    }
    cout << a << " " << b << endl;*/
     // ans: Stage1 - Inside If0 3

   if (a-- > 0 || ++b >2) // since a-->0 is true no need to check ++b>2 for OR condition.
    {
        cout << "Stage1 - Inside If";
    }
    else
    {
        cout << "Stage2 - Inside else";
    }
    cout << a << " " << b << endl;
    //ans: Stage1 - Inside If0 2

}