// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {

        // your code here
         long long M = 1e9+7;
        long long a = 1;
        long long b = 2;
        long long c = 4;
        long long d;
        if(n==1) return a;
        if(n==2) return b;
        if(n==3) return c;
        for(int i =4;i<=n;i++){
            d = (a%M+b%M+c%M)%M;
            a =b%M;
            b=c%M;
            c=d%M;
        }
        return c;

    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;

	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}

    return 0;

}
  // } Driver Code Ends
