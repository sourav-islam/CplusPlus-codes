// * * * *  47mins
// * * * *
// * * * *
// * * * *

#include<iostream>
using namespace std;
int main()
 {                         
    int n;
    cin >> n;
    int i =1; //row index

    while(i<=n)
    {
         int j=1; //column index
         while(j<=n)
         {
            cout << "*";
            j++;
         }
         cout << endl;
       i++;  
    }     
}