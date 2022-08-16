#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countBitsFlip(int a, int b){
    int n=a^b;
    int res=0;
    while(n>0){
        n=n&(n-1);
        res++;
    }
    return res;
    }
};

int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    Solution ob;
    cout<<ob.countBitsFlip(a,b)<<endl;
}
return 0;
}
