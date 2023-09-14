#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number of month:" << endl;
    int num;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Month name: January; days:31" << endl;
        break;
    case 2:
        cout << "Month name: February; days: 28/29" << endl;
        break;
    case 3:
        cout << "Month name: March; days: 31" << endl;
        break;
    case 4:
        cout << "Month name: April; days: 30" << endl;
        break;
    case 5:
         cout << "Month name: May; days: 31" << endl;
         break;
    case 6:
           cout << "Month name: June; days: 30" << endl;
           break;
     case 7:
           cout << "Month name: July; days: 31" << endl;
           break;
     case 8:
           cout << "Month name: August; days: 31" << endl;
           break;  
     case 9:
           cout << "Month name: September; days: 30" << endl;
           break;  
     case 10:
           cout << "Month name: October; days: 31" << endl;
           break;
      case 11:
           cout << "Month name: November; days: 30" << endl;
           break;
    case 12:
           cout << "Month name: December; days: 31" << endl;
           break;                                
    default:
           cout << "Have 12 Month: so give input(1-12)" << endl;
    }
}