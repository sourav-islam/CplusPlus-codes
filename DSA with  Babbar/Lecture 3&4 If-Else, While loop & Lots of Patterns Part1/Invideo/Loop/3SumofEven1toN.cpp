//H/w 37m Print Sum of Even Number(1 to N)

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;  // 2 4 6 8 10=30
    int i = 2;
    int sum = 0;

    while(i<=n)
    {
        sum = sum + i;
        i=i+2;
    }
  printf("Sum of Even Number: %d\n", sum);
} // we use printf() instead of Cout.It's allowed.because C++ is the extension of C.