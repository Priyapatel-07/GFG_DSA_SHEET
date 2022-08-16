#include<bits/stdc++.h>
using namespace std;

class Solution{
sort(a,a+n);
};

int main(){
int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;


    }
    return 0;
}
