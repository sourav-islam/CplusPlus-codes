#include <iostream>
using namespace std;


int power(int a, int b){  // argument name can different .
     int ans = 1;
     for (int  i = 1; i <= b; i++)
     {
        ans = ans * a;
     }

     return ans;
     
}


int main()
{
    int a, b;
    cout << " Enter the value of a,b:" << endl;
    cin >> a >> b;
   int answer = power(a,b);
   cout << answer;

}