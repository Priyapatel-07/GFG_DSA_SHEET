#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> rotate(int n,int d){
    int bit=16;
    if(d>16){
        d%=16;
    }
    int x=(n<<d)|(n>>(bit-d));
    int y=(n>>d)|(n<<(bit-d));
    x=(x&((1<<16)-1));
    y=(y&((1<<16)-1));
    return {x,y};
    }
};

int main(){
int t;
cin>>t;
while(t--){
    int n,d;
    cin>>n>>d;
    Solution ob;
    vector<int> res =ob.rotate(n,d);
    cout<<res[0]<<endl<<res[1]<<endl;
}
}
