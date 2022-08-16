#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

	string removeDups(string S)
	{
	    // Your code goes here
	     string ans="";
    bool a[26]={false};
    for(int i=0;i<S.length();i++)
    {
        if(a[S[i]-'a']==false)
        {
            ans+=S[i];
            a[S[i]-'a']=true;
        }
        else
        continue;
    }
    return ans;
    }
};

int main()
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;


   		Solution ob;
   		cout << ob.removeDups(s) << "\n";

   	}

    return 0;
}
