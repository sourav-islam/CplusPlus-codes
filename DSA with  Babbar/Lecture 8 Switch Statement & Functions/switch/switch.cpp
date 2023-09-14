#include<iostream>
using namespace std;
int main()
{
    int num = 1;

  /*switch (num) 
    {
    case 1: cout <<"the number is " << num << endl;
            cout << "This is case 1" << endl;
             //break;
    case 2: cout << "This is Case 2" <<endl;
    default:
             cout << "this is a default value "<< endl;
    }  */   

    switch (char ch ='A')
    {
    case 'a': cout << "Character a" << endl;
              break;
        
    case 'A': cout << "Nesting switch:" << endl;
              switch (num)
              {
              case 1: cout << "Num is :" << num;
                       break;
              case 2: cout << "Num is 2" << endl;       
              }


                       break;
       default: cout << "Continue"<< endl;
    }  
 }   
       // default and break is not necessary.
       // Use of continue in switch is invalid.Because continue skip the iteration that's mean it needs to loop to implement. 
 /*
       while (1)
       {
        switch(){
            case 1:
            break;
        }
        exit(0);
        // if switch in infinite loop, use exit(0) to go out the loop without break.
       }*/
       
                   

