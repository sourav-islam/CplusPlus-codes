#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool b = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 33 && s[i] <= 126)
        {
            if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+')
                b = 1;
    
         }
        
    }
    if(b)
      cout << "YES";
    else
      cout << "NO";
}

/*#include <iostream>
using namespace std;
 
int main() {
	string str;
	cin>>str;
	int flag=0;
	for(int i=0;i<str.size();i++){
	    if(str[i]>=33&&str[i]<=126){
	    if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
	    flag=1;
	}
	}
	if(flag){
	    cout<<"YES";
	}else{
	    cout<<"NO";
	}
	return 0;
}*/