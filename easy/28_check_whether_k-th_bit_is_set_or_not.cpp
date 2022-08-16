#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool checkKthBit(int n, int k)
    {
           int p=(1<<(k));
      if((n&p)!=0)
      return true;

      return false;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int k;
	    cin>>k;
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
