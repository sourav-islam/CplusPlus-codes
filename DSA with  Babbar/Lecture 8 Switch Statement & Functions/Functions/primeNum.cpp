#include <iostream>
using namespace std;

bool prime(int n)
{
       for (int i = 2; i < n; i++)
       {
        if (n%i == 0)
        {
            return 0;
        }
        
       }
       return 1;
       
}


int main()
{
    int num;
    cout << "Enter value:"<< endl;
    cin >> num;
    if (prime(num))
    {
        cout << "Prime Number" << endl;
    }
    else 
    cout << "Not a Prime Number" << endl;
    
}