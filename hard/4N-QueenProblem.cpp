#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isSafe(vector<vector<bool>> &chessboard, int n, int col,int row){
    for(int i= col-1;i>=0;i--){
        if(chessboard[row][i]){
            return false;
        }
    }
    for(int i=col-1,j=row-1;i>=0&&j>=0;i--,j--){
        if(chessboard[j][i]){
            return false;
        }
    }
    for(int i=col-1,j=row+1;i>=0&&j<n;i--,j++){
        if(chessboard[j][i]){
            return false;
        }
    }
    return true;
    }
    void solve(vector<vector<bool>> chessboard, vector<vector<int>> &ans, int n, int col, vector<int> curr = {}){
        if(col == n){
            ans.push_back(curr);
            return;
        }
        for(int i = 0; i < n; i++){
            if(isSafe(chessboard, n, col, i)){
                chessboard[i][col] = true;
                curr.push_back(i + 1);
                solve(chessboard, ans, n, col + 1, curr);
                chessboard[i][col] = false;
                curr.pop_back();
            }
        }
        return;
    }

     vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        vector<vector<bool>> chessboard;
        for(int i = 0; i < n ; i++){
            vector<bool> visited(n, false);
            chessboard.push_back(visited);
        }
        int col = 0;
        solve(chessboard, ans,n, col);
        return ans;
    }
};

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    Solution ob;
    vector<vector<int>>ans= ob.nQueen(n);
    if(ans.size()==0)
        cout<<-1<<"\n";
    else{
        for(int i=0;i<ans.size();i++){
            cout<<"[";
            for(int u:ans[i])
                cout<<u<<" ";
            cout<<"]";
        }
        cout<<endl;
    }
}
return 0;
}
