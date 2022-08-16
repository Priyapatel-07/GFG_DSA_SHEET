#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

    string longestCommonPrefix (string arr[], int N)
    {
        string longestString;

        if(N==0)
          return "-1";

        if(N==1)
          return arr[0];

        string &first =arr[0];
    int num_chars=0,i=0;
        bool matching_till_i=false;
         while(1){
            matching_till_i=true;
            for(int i=1;i<N;i++){
                if(first[num_chars]==arr[i][num_chars])
                  continue;
                  matching_till_i=false;
            }
            if(matching_till_i)
              num_chars++;
            else
              break;

        }
        if(num_chars==0)
           return "-1";


        longestString= arr->substr(0,num_chars);
        return longestString;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}
