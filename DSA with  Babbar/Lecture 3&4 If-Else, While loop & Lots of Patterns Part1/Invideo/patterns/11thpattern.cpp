//27min

// A A A
// B B B
// C C C
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row<=n) 
    {
       int col = 1;
       char ch = 'A'+row-1;
       while (col<=n) 
       {
        //if cout << 'A'+row-1; then typecasting 'A' to integer.
        cout << ch << " ";
        col++;
       }
       cout << endl;
       row++;
       
    }
    
}