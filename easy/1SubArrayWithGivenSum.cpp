#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> subarraySum(int arr[],int n, long long s){
    int l=0;
    int r=0;
    int sum=arr[0];
    while(r<=n&& l<=n){
        if(sum==s)
        return vector<int>{l+1,r+1};
        if(sum<s){
            sum+=arr[r+1];
            r+=1;
        }else{
        sum-=arr[l];
        l+=1;
        }
    }
    return vector<int>{-1};
    }
};

int main(){
int t;
cin>>T;
while(t--){
    int n;
    long long s;
    cin>>n>>s;
    nt arr[n];
    const int mx= 1e9;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution ob;
    vector<int>res;
    res=ob.subarraySum(arr,n,s);

    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";

    cout<<endl;
}
return 0;
}
