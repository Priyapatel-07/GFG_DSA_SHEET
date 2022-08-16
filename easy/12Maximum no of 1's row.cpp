#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int max_count=0;
           int index=0;
           // your code here
           for(int i=0;i<N;i++)
           {
               int count=0;

               for(int j=0;j<M;j++)
               {
                   if (Mat[i][j]==1)
                   {
                       count=count+1;
                   }
               }
               if (count>max_count){
                   max_count=count;
                   index=i;
               }
           }
           return index;
        }
};

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
