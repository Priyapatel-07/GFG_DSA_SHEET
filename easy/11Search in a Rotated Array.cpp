#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int search(int nums[], int low, int high, int key){
    //complete the function here
    while(low<=high) {
     int mid = (low+high)/2;
     if(nums[mid]==key) return mid;
     else if (nums[mid] >= nums[low]) {
      if(key>=nums[low] and key<=nums[mid]) {
        high=mid-1;
      } else {
        low=mid+1;
      }
     }  else {
        if(key>=nums[mid] and key<=nums[high]) {
          low=mid+1;
        } else {
          high=mid-1;
        }
     }
    }
    return -1;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
