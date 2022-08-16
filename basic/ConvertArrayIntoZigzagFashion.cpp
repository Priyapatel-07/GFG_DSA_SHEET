#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void zigzag(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        if(i%2==0&&arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        else if(i%2!=0&& arr[i]<arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    }
};

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution ob;
    ob.zigZag(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
return 0;
}
