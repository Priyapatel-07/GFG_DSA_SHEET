#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int romanToDecimal(string &str) {

        map<char,int> v={{'I' ,1},{'V' ,5},{'X' ,10},{'L' ,50},{'C', 100},{'D', 500},{'M' ,1000}};
        int sum=0;
        for(int i=0;i<str.size();i++){
            if(v[str[i]]>=v[str[i+1]]){
             sum+=v[str[i]];
            }else{
             sum-=v[str[i]];
            }
        }
        return sum;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
