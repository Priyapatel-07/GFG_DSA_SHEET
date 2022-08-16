#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long int minValue(int a[],int [],int n){
    sort(a,a+n,greater<int>());
    sort(b,b+n);

    long long int sum=0;

    for(int i=0;i<n;i++){
        sum+=a[i]*b[i];
    }
    return sum;
    }
};

int main(){
int t;
cin>>t;
while(t--){
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    Solution ob;
    cout<<ob.minValue(a,b,n)<<endl;
}
return 0;
}
