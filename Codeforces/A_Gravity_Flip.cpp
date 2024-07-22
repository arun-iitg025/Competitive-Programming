#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    vector<int> ans;
    while(t--){
        int val;
        cin>>val;
        ans.push_back(val);
    }
    sort(ans.begin(), ans.end());
    for(auto &x:ans){
        cout << x<<" ";
    }
    return 0;
}