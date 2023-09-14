#include <iostream>
using namespace std;

bool isEven(int a)
{
    if (a&1)
    {
        return 1;
    }
    return 0;
    
}

int main()
{
    int num;
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is odd, and value is:" << num;
    }
   else
    cout << "Number is even, and value is:" << num;
    
    return 0;
}