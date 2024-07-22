#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> ans;
    for(int i=0; i<m; i++){
        int val;
        cin>>val;
        ans.push_back(val);
    }
    sort(ans.begin(), ans.end());
    int small = ans[n-1] - ans[0];
    for(int i=1; i<=m-n; i++){
        if(ans[i+n-1] - ans[i]<small){
            small = ans[i+n-1] - ans[i];
        }
    }
    cout << small << endl;
    return 0;
}