#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> p(n);
        for(auto &x:p){
            cin>>x.first;
        }
        cout << endl;
        for(auto &x:p){
            cin>>x.second;
        }
        sort(p.begin(), p.end());
        for(auto &x:p){
            cout << x.first <<' ';
        }
        cout << endl;
        for(auto &x:p){
            cout << x.second <<' ';
        }
    }
    return 0;
}