//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long ans=0;
    void mergeSort(long long arr[], long long l, long long m, long long r){
        long long n1=m-l+1;
        long long n2=r-m;
        long long left[n1], right[n2];
        for(long long i=0;i<n1;i++){
            left[i]=arr[l+i];
        }
        for(long long i=0;i<n2;i++){
            right[i]=arr[m+i+1];
        }
        int i=0, j=0, k=l;
        while(i<n1 && j<n2){
            if(left[i]<=right[j]){
                arr[k]=left[i];
                i++;
            }else{
                ans+=n1-i;
                arr[k]=right[j];
                j++;
            }
            k++;
        }
        while(i<n1) arr[k++]=left[i++];
        while(i<n2) arr[k++]=right[j++];
        
    }
    
    void merge(long long arr[], long long l, long long r){
      if(l<r){
          int m=(l+r)/2;
          merge(arr,l,m);
          merge(arr,m+1,r);
          mergeSort(arr,l,m,r);
      }    
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        merge(arr,0,N-1);
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends