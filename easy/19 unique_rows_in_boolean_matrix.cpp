#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	vector<vector<int>> vec = uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}


struct Trie{
Trie *a[2];
};

Trie* newNode(){
Trie *temp =new Trie();
temp->a[0]= temp->a[1]=NULL;
return temp;
}

bool insert(Trie* head, int M[MAX][MAX],int row,int n){
if(head==NULL)
    head=newNode();

int cnt=0;
for(int i=0;i<n;i++){
    if(head->a[M[row][i]]==NULL)
        head->a[M[row][i]]=newNode();
    else
        cnt++;
    head=head->a[M[row][i]];
}
if(cnt==n) return false;

return true;
}

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
  vector<vector<int>> ans;
  Trie *head=newNode();
  for(int i=0;i<row;i++){
    if(insert(head,M,i,col)){
        vector<int>v;
        for(int j=0;j<col;j++){
            v.push_back(M[i][j]);
        }
        ans.push_back(v);
    }
  }
  return ans;
}
