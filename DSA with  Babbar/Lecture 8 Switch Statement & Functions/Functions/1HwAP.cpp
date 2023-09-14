// AP = Arithmetic Pogration
#include <iostream>
using namespace std;

int AP(int x)
{
    int ap = 3*x + 7;
    return ap;
}

int main()
{
    int n;
    cin >> n;
    int ans = AP(n);
    cout << ans << endl;
}