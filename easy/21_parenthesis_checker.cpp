#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool ispar(string x)
    {
        stack<int>s;
        for(int i=0;i<x.size();i++){
            if(x[i]=='('||x[i]=='['||x[i]=='{'){
                s.push(x[i]);
            }
            else{
                if(s.empty()){
                    return false;
                }
                else if(s.top()=='('&& x[i]!=')'){
                    return false;
                }else if(s.top()=='{'&& x[i]!='}'){
                    return false;
                }else if(s.top()=='['&& x[i]!=']'){
                    return false;
                }else{
                    s.pop();
                }
            }
        }
         if(s.empty()){
            return true;
        }else{
            return false;
        }
    }

};


int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}

