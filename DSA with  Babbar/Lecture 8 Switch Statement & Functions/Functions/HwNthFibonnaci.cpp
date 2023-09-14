#include <iostream>
using namespace std;


int NthFibo(int num)
{
    int a = 0, b = 1, NextNum;

    if (num == 1)
        {
            return a;
        }

        if (num == 2)
        {
            return b;
        }

    for (int i = 3; i <=num; i++)
    {
        
        NextNum = a + b;
        a = b;
        b = NextNum;
        
    }
     
      return NextNum;
}

int main()
{
    int n;
    cin >> n;
    int ans = NthFibo(n);
    cout << n <<"th Number of Fibonacci Series:" << ans << endl;
}