#include<bits/stdc++.h>
using namespace std;
#define ll long long


  string  bin(long n)
  {
    string temp = "";
    long i;
    temp+='0';
    // cout << "0";
    for (i = 1 << 30; i > 0; i = i / 2)
    {
      if((n & i) != 0)
      {
        temp+='1';
        // cout << "1";
      }
      else
      {
        temp+='0';
        // cout << "0";
      }
    }
    return temp;
  }
 
// Driver Code
int main(void)
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans = bin(n);
        int count = 0;
        for(int i=0; i<30; i++){
            if(ans[i] == '1'){
                string ttt = ans.substr(i,3);
                if(ttt == "101") count++;
            }
        }
        cout << count << endl;
    }
    return 0;    
}