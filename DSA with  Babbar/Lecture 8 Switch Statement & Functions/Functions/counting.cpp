#include <iostream>
using  namespace std;


void printcounting(int num)
{
    
    for (int i = 1; i <=num; i++)
    {
        
        cout << i;
        cout << " ";
    }
    
}
int main()
{
    int n;
    cin >> n;
    printcounting(n);

}