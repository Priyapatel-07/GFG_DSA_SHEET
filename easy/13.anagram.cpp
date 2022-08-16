#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isAnagram(string a,string b){
    int array1[26]={};
    int array2[26]={};
    int l= a.size();
    int p= b.size();
    for(int i=0;i<l;i++){
        array1[a[i]-'a']++;
    }
    for(int i=0;i<p;i++){
        array2[b[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(array1[i]!=array2[i]){
            return false;
        }
    }
    return true;
    }

};

int main() {

    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
