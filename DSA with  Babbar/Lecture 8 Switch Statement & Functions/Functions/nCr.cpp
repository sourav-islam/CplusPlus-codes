#include <iostream>
using namespace std;

int factorial(int a)
{
    int fact = 1;
    for (int  i = 1; i <=a; i++)
    {
        fact = fact * i;
        
    }
   return fact; 
}


int nCr(int n, int r){

    int b = factorial(n)/(factorial(r)*factorial(n-r));
    return b;
}


int main()
{
    int n, r;
    cin >> n >> r ;
    int ans = nCr(n,r);
    cout << ans;
    
}


// #include<iostream>
// using namespace std;

// int factorial(int n) {

//     int fact = 1;

//     for(int i = 1; i<=n; i++ ) {
//         fact = fact * i;
//     }

//     return fact;
// }

// int nCr(int n, int r) {

//     int num = factorial(n);

//     int denom = factorial(r) * factorial(n-r);

//     return num/denom;
// }


// int main( ) {

//     int n, r;

//     cin>> n >> r ;

//     cout <<" Answer is " << nCr(n,r) << endl;

//     return 0;
// }