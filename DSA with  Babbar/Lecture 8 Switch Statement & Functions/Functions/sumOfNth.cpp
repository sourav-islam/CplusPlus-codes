#include <iostream>
using namespace std;

void counting(int num)
{
    int count = 0;
    for (int  i = 1 ; i <= num; i++)
    {
        count = count + i;
    } 
   cout << count;
    
}

int main()
{
    int n;
    cin >> n;
    counting(n);
   // int ans = counting(n);
    //cout << ans;
}