#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int val;
        cin>>val;
        string str = to_string(val);
        string ans = "";
        map<int, char>mp;
        char ch = 'a';
        for(int i=1; i<=26; i++){
            mp[i] = ch++;
        }
        reverse(str.begin(), str.end());
        int num = stoi(str);
        // cout << num << endl;
        // cout << num<< endl;
        while(1){
            int rem = num%10;
            ans+=mp[rem];
            val-=rem;
            if(val<=26){
                ans+=mp[val];
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}