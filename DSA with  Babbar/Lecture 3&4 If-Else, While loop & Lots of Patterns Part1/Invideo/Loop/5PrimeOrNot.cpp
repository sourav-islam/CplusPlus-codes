//40m check Prime Or Not
#include<iostream>
using namespace std;
int main(){
    int n; 
    cin >> n;   // n=5,  1 (2 3 4) 5
    int i=2;

    while(i<n)
    {
        if(n%i==0)
        {
            cout << " Not Prime for" <<i <<endl;
        }
        else{
            cout << "Prime for"<<i <<endl;
        }
        i=i+1;
    }


}