#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        map<char, int>mp;
        
        string str;
        cin>>str;
        for(auto &x:str){
            mp[x]++;
        }
        int maxi = INT_MIN;
        for(auto &x:mp){
            maxi = max(maxi, x.second);
        }
        cout << maxi <<" ";
        for(int i=0; i<b; i++){
            char ch;
            cin>>ch;
            mp[ch]++;
            maxi = max(maxi, mp[ch]);
            cout << maxi <<" ";
        }
        cout << endl;
    }
    return 0;
}
