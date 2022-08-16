#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    unsigned int swapBits(unsigned int n)
    {
    	vector<int> v;
     while(n>0){
           if(n%2==0){
            n=n/2;
            v.push_back(0);
           }
           else{
               n=n/2;
               v.push_back(1);
               }
           }
       if (v.size()%2!=0)
         v.push_back(0);
       for(int i=0;i<v.size();i=i+2){
           swap(v[i],v[i+1]);
       }
       int res=0;
       for(int i=0;i<v.size();i++){
           if(v[i]==1){
               res=res+pow(2,i);
           }
       }
       return res;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned int n;
		cin>>n;

		Solution ob;

		cout << ob.swapBits(n) << endl;
	}
	return 0;
}
