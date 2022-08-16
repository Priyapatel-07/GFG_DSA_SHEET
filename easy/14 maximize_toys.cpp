#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(),arr.end());
        int count=0;
        for(int i=0;i<N;i++){
            K=K-arr[i];
            if(K<0){
                break;
            }
            count++;

        }
        return count;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}
