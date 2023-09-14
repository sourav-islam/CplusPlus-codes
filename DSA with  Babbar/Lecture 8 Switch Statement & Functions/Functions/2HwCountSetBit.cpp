#include <iostream>
using namespace std;

int SetBitOf(int num)
{
    int count = 0;
    while (num != 0)
    {
        bool bit = num & 1;
        if (bit)
        {
            count = count + bit;
        }
     num = num >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter values of a , b:" << endl;
    cin >> a >> b;

    int a1 = SetBitOf(a);
    int b1 = SetBitOf(b);
    printf("a1 = %d\n", a1);
    printf("b1 = %d\n", b1);
    cout << "Total number of Setbits in a & b is : " << (a1 + b1) << endl;
}