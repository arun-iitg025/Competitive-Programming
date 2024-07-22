#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t,n;
    cin>>t>>n;
    vector<pair<int, int>>p;
    while(n--){
        int a,b;
        cin>>a>>b;
        p.push_back(make_pair(a,b));
    }
    sort(p.begin(), p.end());
    bool flag = true;
    for(auto &x:p){
        if(x.first<t){
            t+=x.second;
        }
        else{
            cout << "NO"<< endl;
            flag = false;
            break;
        }
    }
    if(flag == true) cout << "YES" << endl;
    return 0;
}