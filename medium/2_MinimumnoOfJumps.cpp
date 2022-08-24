#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minJumps(int arr[],int n){
    if(n==1)
        return 0;
    if(arr[0]==0)
        return -1;

    int maxRange =arr[0],steps=arr[0],jumps=0;

    for(int i=1;i<n;i++){
        steps--;
        maxRange =max(maxRange,arr[i]+i);
        if(steps==0){
            jumps++;
            steps= maxRange-i;
            if(steps<=0)
                return -1;
        }
    }
    return jumps+1;
    }

};

int main(){
int t
cin>>t;
while(t--){
    int n,j,i;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    Solution obj;
    cout<<obj.minJumps(arr,n)<<endl;
}
return 0;
}
