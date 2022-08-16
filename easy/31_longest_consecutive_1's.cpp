#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        	int cnt = 0;
        int mx = 0;
        while(N>0){
            if(N&1){
                cnt++;
                mx = max(cnt,mx);
            }
            else{
                cnt =0;
            }
            N = N>>1;
        }
        return mx;
    }
};


int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution obj;
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
