
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(int N, vector<int>curr, vector<int>&ansvec){
        if(N == 0)
            return;

        for(int i = 0; i < curr.size(); i++){
            if(curr[i] > N){
                ansvec.push_back(curr[i-1]);
                N -= curr[i-1];
                break;
            }
        }

        solve(N, curr, ansvec);
    }

    vector<int> minPartition(int N)
    {
        // code here
          vector<int>curr = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        vector<int>ansvec;

        int ans = 0;
        if(N > 2000){
            ans += N/2000;
            N -= ans*2000;
            while(ans){
                ansvec.push_back(2000);
                ans--;
            }
        }

        solve(N, curr, ansvec);
        return ansvec;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;

        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
