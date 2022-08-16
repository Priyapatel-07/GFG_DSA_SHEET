#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    unsigned int getFirstSetBit(int n)
    {
           int count=1;
       while(n!=0)
       {
           if(n&1)
           {
               return count;
           }
           n=n>>1;
           count++;
       }
       return 0;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n));
    }
	return 0;
}

