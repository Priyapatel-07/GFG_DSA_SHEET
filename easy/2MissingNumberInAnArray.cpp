#include<bits.stdc++.h>
using namespace std;

class Solution{
public:
    int MissingNumber(vector<int>&array,int n){
    int total =n*(n+1)/2;
    for(int i=0;i<n-1;i++)
        total-=array[i];

    return total;
    }

};

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

    vector<int> array(n-1);
    for(int i=0;i<n-1;i++)
        cin>>array[i];

    Solution obj;
    cout<<obj.MissingNumber(array,n)<<"\n";
}
return 0;
}
