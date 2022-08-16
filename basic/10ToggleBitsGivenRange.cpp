#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int toggleBits(int N, int L, int R){
    int mask=1;
    R-=L;
    L-=1;
    while(R){
        mask<<=1;
        mask+=1;
        R--;
    }
    while(L){
        mask<<=1;
        L--;
    }
    return N^mask;
    }
};

int main(){
   int t;
   cin>>t;
   while(t--){
    int N,L,R;
    cin>>N>>L>>R;

    Solution ob;
    cout<<ob.toggleBits(N,L,R)<<endl;
   }
   return 0;
}
