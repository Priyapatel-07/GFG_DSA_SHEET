#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
      bool isRotated(string s, string b)
    {
        // Your code
        string str = "";

        string str1 = "";

        str = str+ s.substr(2,s.length());
        str = str + s.substr(0,2);

        str1 = str1+ b.substr(2,b.length());
        str1 = str1 + b.substr(0,2);

        if (b==str || s == str1)
        {
            return 1;
        }
        else
        {
          return 0;
        }
    }

};


int main() {

	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
