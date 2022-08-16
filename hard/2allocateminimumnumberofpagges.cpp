#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isPossible(int arr[],int n, int m, long long int curMin){
    int studentsRequired=1;
    int curSum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>curMin)
            return false;

        if(curSum+ arr[i]>curMin){
            studentsRequired++;
            curSum=arr[i];

            if(studentsRequired>m) return false;
        }else{
        curSum+=arr[i];
        }
    }
    return true;

    }

    int findPages(int arr[],int n,int m){
    long long sum=0;
    if(n<m) return -1;

    for(int i=0;i<n;++i)sum+=arr[i];

    long long start=0;
    long long end= sum,mid;
    long long int ans= int(1e15);

    while(start<=end){
        mid=(start+end)/2;
        if(isPossible(arr,n,m,mid)){
            ans+ans<mid?ans:mid;
            end=mid-1;
        }else{
          start=mid+1;
        }
        return ans;

    }

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
    int m;
    cin>>m;
    Solution ob;
    cout<<ob.findPages(A,n,m)<<endl;

}
return 0;
}
