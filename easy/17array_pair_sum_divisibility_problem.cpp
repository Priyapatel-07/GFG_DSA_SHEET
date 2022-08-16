#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
       vector<int> res(k,0);
       for(auto &x:nums){
        x%=k;
        res[x]++;
       }
       for(auto x:nums){
        if(x==0){
            if(res[0]%2==0){
                continue;
            }else{
            return false;
            }
        }
        if(res[k-x]>0){
            res[k-x]--;
        }else{
            return false;
        }
       }
       return true;
    }
};


int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
