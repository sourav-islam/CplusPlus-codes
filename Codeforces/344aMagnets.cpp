#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 1;
   string s[n];
   for( int i = 0; i<n; i++){
    cin >> s[i];
   }
   for( int i = 0; i<n-1; i++){
       if( s[i] != s[i+1])
         {count++;
         }
   }
   cout << count;
}