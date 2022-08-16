#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    string UncommonChars(string A, string B){
    string ans;
    unordered_set<char>s(A.begin(),A.end());
    unordered_set<char>t(A.begin(),A.end());
    for(auto x:B){
        if(s.find(x)==s.end()){
            ans+=x;
        }
    }
    for(auto x:A){
        if(t.find(x)==t.end()){
            ans+=x;
        }
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());

    return ans==""?"-1":ans;
    }
};

int main(){
int t;
cin>>t;
while(t--){
    string A,B;
    cin>>A;
    cin>>B;
    Solution ob;
    cout<<ob.UncommonChars(A,B);
    cout<<endl;
}
return 0;
}
