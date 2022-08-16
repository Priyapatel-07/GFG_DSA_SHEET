#include<iostream>
using namespace std;

class Solution{
public:
  bool isSparse(int n){
  int c=0;
  if(n<=2)
    return true;
  while(n>0){
    if(n%2==1&&((n/2)%2)=1)
        return false;
    n=n/2;
  }
  return true;
  }

};

int main(){
int t,n;
cin>>t;
while(t--){

    cin>>n;
    Solution ob;
    if(ob.isSparse(n)){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
}
return 0;
}
