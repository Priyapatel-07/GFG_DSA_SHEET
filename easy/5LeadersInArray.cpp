#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int>leaders(int a[],int n){
    vector<int> ans;
    int max_ele= a[n-1];
    ans.push_back(max_ele);

    for(int i=n-2;i>=0;i--){
        if(a[i]>=max_ele){
            max_ele= a[i];
        ans.push_back(a[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }

};

int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    int a[n];

    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    Solution obj;
    vector<int> v= obj.leaders(a,n);

    for(auto it= v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
}
