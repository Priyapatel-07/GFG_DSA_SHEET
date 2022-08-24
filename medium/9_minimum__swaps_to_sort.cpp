//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find the minimum number of swaps required to sort the array.
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	     priority_queue<int> q;
    int n = nums.size();int cnt = 0;
    for(int i=0;i<n;i++){
        mp[nums[i]] = i;
        q.push(nums[i]);
    }
 for(int i = n-1;i>=0;i--){
     if(nums[i] == q.top())
         q.pop();
        else{
            cnt++;
        mp[nums[i]] = mp[q.top()];
        swap(nums[i] , nums[mp[q.top()]]);
        q.pop();}
     }
    return cnt;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
