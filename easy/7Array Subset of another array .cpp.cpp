#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[],int a2[],int n, int m){
unordered_map<int,int>umap;
for(int i=0;i<n;i++) umap[a1[i]]++;
for(int i=0;i<m;i++){
    if(!umap.count(a2[i])) return "NO";
    umap[a2[i]]--;
    if(!umap[a2[i]])umap.erase(a2[i]);
}
return "Yes";
}

int main()
{ int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }

    cout<<isSubset(a1,a2,n,m)<<endl;
}
return 0;
}
