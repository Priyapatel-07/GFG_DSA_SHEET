#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    cout<<firstRepChar(s)<<endl;
}
return 0;
}

string firstRepChar(string s){
 string str="";
 int arr[10000]={0};
 for(int i=0;i<s.length();i++){
    if(arr[s[i]-'a']==2){
        str+=s[i];
        break;
    }
 }
 if(str.length()==0)
    return "-1";
 return str;
}
