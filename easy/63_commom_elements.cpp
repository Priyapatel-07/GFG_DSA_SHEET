#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        unordered_map<int,int> mp;
        vector<int>res;
        for(int i=0;i<v1.size();i++){
            mp[v1[i]]++;
        }
        for(int i=0;i<v2.size();i++){
            if(mp.find(v2[i])!=mp.end()and mp[v2[i]]!=0){
                mp[v2[i]]--;
                res.push_back(v2[i]);
            }
        }
        sort(res.begin(),res.end());
    return res;

    }
};




int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;

    }
}
