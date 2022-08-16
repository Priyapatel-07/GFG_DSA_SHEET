#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string reverseWords(string S)
    {
         stack<int> s;
         string r="";
         int dotcount=1;
         for(int i=0;i<S.size();i++){
             if(S[i]=='.'||S[i]=='\0'){
                 if(dotcount!=1){
                     r+='.';
                 }
                 dotcount++;
                 s.push(r);
                 r="";
             }else  if(S[i]>='a' || S[i]<='z'){
                 r=r+S[i];
             }
         }
         int ans="";
         while(!isempty()){
             ans+=s.top();
             s.pop();
         }
         return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}

