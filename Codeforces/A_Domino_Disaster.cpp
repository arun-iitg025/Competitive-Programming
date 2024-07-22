#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        string ans = "";
        for(int i=0; i<n; i++){
            if(str[i] == 'L'){
                ans +="L";
            }
            if(str[i] =='R'){
                ans+="R";
            }
            if(str[i] == 'U'){
                ans+="D";
            }
            if(str[i] == 'D'){
                ans+='U';
            }
        }
        cout << ans << endl;
    }
    return 0;
}