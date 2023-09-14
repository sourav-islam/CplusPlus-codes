//Given an integer number n, return the difference between the product of its digits and the sum of its digits.
#include<iostream>
using namespace std;
int main(){

     int n;
     cin >> n;
     int prod = 1;
     int sum = 0;
     int digit ;

     while(n!=0){
        digit = n%10;
        prod = digit*prod;
        sum = digit+sum;
        n=n/10;
     }   
     int ans=prod-sum; 
     cout << ans;
}