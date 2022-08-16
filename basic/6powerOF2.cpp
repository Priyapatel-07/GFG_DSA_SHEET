#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isPowerOfTwo(long long n){
    if(n==0)
       return 0;
    else
        if(n&(n-1))
            return 0;
        else
            return 1;

    }
};

int main(){
 int t;
 cin>>t;
 for(int i=0;i<t;i++){
    long long n;
    cin>>n;
    Solution ob;
    if(ob.isPowerofTwo(n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 }
 return 0;

}
