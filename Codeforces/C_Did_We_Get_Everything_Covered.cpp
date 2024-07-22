#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        string str;
        cin>>str;
        map<char, int>mp;
        for(auto &x:str){
            mp[x]++;
        }
        char ch;
        bool flag = false;
        for(auto &x:mp){
            if(x.second<a){
                ch = x.first;
                flag = true;
                break;
            }
        }
        string ans = "";
        for(int i=0; i<a; i++){
            ans+=ch;
        }
        if(flag == true){
            cout << "NO" << endl;
            cout << ans << endl;
        }
        else
        cout << "YES" << endl;
    }
    return 0;
}