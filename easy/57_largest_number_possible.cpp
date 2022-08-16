// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        string ans;
       if(S==0 && N>1){
           return "-1";
       }
           for(int i=0;i<N;i++){
               if(S>=9){
                   ans.push_back('9');
                   S-=9;
               }
               else{
                   ans=ans+to_string(S);
                   S=0;
               }
           }

       if(S==0){
           return ans;
       }
       else{
           return "-1";
       }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;

        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
