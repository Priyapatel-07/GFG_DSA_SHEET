#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> Mat) {

        int temp=Mat[0][0];
        for(int i=0;i<M;i++){
            swap(Mat[i][0],temp);
            temp=Mat[i][0];
        }

        for(int i=0;i<N;i++){
            swap(Mat[N][i],temp);
            temp=Mat[N][i];
        }
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, Mat);
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

