#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int binarysearch(int arr[], int n, int k){
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(k==arr[mid]){
            return mid;
        }else if(k< arr[mid]){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return -1;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<n;i++) cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found= ob.binarysearch(arr,N,key);
        cout<<found<<endl;
    }

}
