#include<bits/stdc++.h>
using namespace std;

int longestSubstrDistinctChars (string S);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

int longestSubstrDistinctChars (string S)
{
        int ans=INT_MIN;
   map<char,int> m;
   int st=0;
   int run=0;
   while(run<S.length()){
       if(m[S[run]]!=0){
           ans=max(ans,run-st);
           while(S[st]!=S[run]){
               m[S[st]]--;
               st++;
           }
           m[S[st]]--;
           st++;
       }
       m[S[run]]++;
       run++;
   }
   ans=max(ans,run-st);

   return ans;

}

