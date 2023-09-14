//Fibonacci series
#include <iostream>
using namespace std;

void Fibonnacci (int n)
{
     int a = 0, b = 1, nextNum;

    for (int i = 1; i<=n; i++)
    {
        if (i==1)
        {
            cout << a << ",";
            continue;
        }
        if (i==2)
        {
            cout << b << ",";
            continue;
        }
        nextNum = a + b;
        cout << nextNum << ",";
        a = b,
        b = nextNum;
    }
}

int main()
{    int n;
     cin >> n;
    Fibonnacci(n);
}

