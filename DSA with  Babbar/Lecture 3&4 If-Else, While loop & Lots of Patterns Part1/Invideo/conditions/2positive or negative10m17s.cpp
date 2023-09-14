/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;

    if (a>0)
    {
        cout << " a is a positive number." << endl;
    }
}*/

//if -else conditions
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
   
   // if -else conditions 10mins(video)

    /*if (a> 0)
    {
        cout << " a is a positive number." << endl;
    }
    else{
        cout << "a is negative." << endl;
    }*/

    // Nested if -else 18mins

    if(a>0){
        cout << " a is a positive number." << endl;
    }

    else{
        if (a<0){
            cout << " a is a negative number." << endl;
        }
        else{
            cout << " a is zero." << endl;
        }
    }
}