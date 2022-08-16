#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int maxLen(vector<int> &A, int n){
      unordered_map<int,int>m;

      int pre_sum=0;int res=0;
      m.insert({0,-1});
      for(int i=0;i<n;i++){
        pre_sum+=A[i];

        if(m.find(pre_sum)==m.end()){
            m[pre_sum]=i;
        }else{
          auto  it= m.find(pre_sum);
          res= max(res,i-it->second);
        }

      }
      return res;
    }
};

int main(){
int t;
cin>>t;
while(t--){
    int m ;
    cin>> m;
    vector<int > array1(m);
    for(int i=0;i<m;i++){
        cin>>array1[i];
    }
    Solution ob;
    cout<<ob.maxLEn(array1,m)<<endl;
}
return 0;
}
