#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long maxSubarraySum(int arr[],int n)
    long long sum=arr[0];
    long long maxE =arr[0];
    for(int i=1;i<n;i++){
        maxE=max(arr[i],(int)maxE+arr[i]);
        sum=max(sum,maxE);
    }
    return sum;

    };

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.maxSubarraySum(a,n)<<endl;
    }


}
