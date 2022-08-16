#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findOnce(int arr[].int n){
    int x=0;
    for(int i=0;i<n;i++){
        x=x^arr[i];
    }
    return x;
    }
};

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    Solution ob;

    int res = ob.findOnce(A,n);
    cout<<res<<endl;
}
return 0;
}
