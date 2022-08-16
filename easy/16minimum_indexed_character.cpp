#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int minIndexChar(string str, string patt)
    {
        unordered_map<int,int>mp;
        int n= str.length();
        for(int i=0;i<n;i++){
            if(mp.find(str[i])==mp.end()){
                mp[str[i]]=i;
            }
        }
        int maxx=INT_MAX;
        int m=patt.length();
        for(int i=0;i<m;i++){
            if(mp.find(patt[i])!=mp.end()){
                if(maxx>mp[patt[i]]){
                    maxx=mp[patt[i]];
                }
            }
        }
        if(maxx==INT_MAX){
            return -1;
        }
        return maxx;
    }
};

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

