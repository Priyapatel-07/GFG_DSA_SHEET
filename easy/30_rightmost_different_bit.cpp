#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int posOfRightMostDiffBit(int m, int n)
    {
         int x=m^n;
       if (x==0) return -1;
       int i=1;
       while((x&(1<<(i-1)))==0) i++;
       return i;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int m,n;
         cin>>m>>n;
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;
}
