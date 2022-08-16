#include<bits/stdc++.h>
using namespace std;

#define UNASSIGNED 0
#define N 9

class Solution{
public:
   bool check(int A[N][N],int a, int b, char k){
   for(int i=0;i<9;i++)
       if(A[i][b]==k or A[a][i]==k) return  false;
   int rows, rowf, cols, colf;
   rows=a;
   rowf=a;
   rowf++;
   while(rows%3)
     rows--;
   cols=b;
   while(cols%3)
     cols--;
   while(rowf%3)
    rowf++;
   colf=b;
   colf++;
   while(colf%3)
     colf++;

   for(int i= rows;i<rowf;i++){
    for(int j=cols;j<colf;j++){
        if(A[i][j]==k)
            return false;
    }

   }
   return true;

   }

   bool prob(int A[N][N], int i, int j){
     if(i==9)
        return true;
     if(j==9)
        return prob(A,i+1,0);
     if(A[i][j])
        return prob(A,i,j+1);
     for(char k=1;k<=9;k++){
        if(check(A,i,j,k)){
            A[i][j]=k;
            if(prob(A,i,j+1))
                return true;
            A[i][j]=0;
        }
     }
     return false;
   }

   bool SolveSudoku(int grid[N][N]){
   prob(grid,0,0);
   }

   void printGrid(int grid[N][N]) {
   for(int i=0;i<N;i++)
      for(int j=0;j<N;j++)cout<<grid[i][j]<<" ";
   }
};

int main(){
   int t;
   cin>>t;
   while(t--){
    int grid[N][N];
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
          cin>>grid[i][j];

    Solution ob;
    if(ob.SolvesSudoku(grid)==true)
        ob.printGrid(grid);
    else
        cout<<"No solution exists";

    cout<<endl;

   }
   return 0;
}
