#include<bits/stdc++.h>
using namespace std;

int strstr(string , string);

int main(){
int t;
cin>>t;
while(t--){
    string a;
    string b;
    cin>>a>>b;
    cout<<strstr(a,b)<<endl;
}
}

int strstr(string s,string x){
int a=-1;
a=s.find(x);
return a;
}
