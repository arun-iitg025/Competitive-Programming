#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string ans = "";
        ans+=str[0];
        for(int i=1; i<str.size(); i++){
            ans+=str[i];
            i++;
        }
        if(str.size()%2 != 0){
            ans+=str[str.size()-1];
        }
        cout << ans << endl;
        
    }
    return 0;
}