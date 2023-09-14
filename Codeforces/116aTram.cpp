#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    int sum = 0, MAX = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum -= a;
        sum += b;
        if (sum > MAX)
        {
            MAX = sum;
        }
    }
    cout << MAX;
}