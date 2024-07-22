#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans;
    for(int i=0; i<4; i++){
        int val;
        cin>>val;
        ans.push_back(val);
    }
    sort(ans.begin(), ans.end());
    cout << ans[3]- ans[0]<<" ";
    cout << ans[3]- ans[1]<<" ";
    cout << ans[3]- ans[2]<<" ";
    return 0;
}