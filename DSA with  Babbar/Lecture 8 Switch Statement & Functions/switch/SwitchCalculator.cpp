#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a and b :" << endl;
    cin >> a >> b;
    cout << "Enter the operation sign:" << endl;
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "(a+b) = " << (a + b);
        break;
    case '-':
        cout << "(a-b) = " << (a - b);
        break;
    case '*':
        cout << "(a*b) = " << (a * b);
        break;
    case '/':
        cout << "(a/b) = " << (a / b);
        break;
    case '%':
        cout << "(a%b) = " << (a % b);
        break;
    default:
        break;
    }
}