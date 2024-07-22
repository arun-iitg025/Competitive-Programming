#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
         ll num;
        cin>>num;
        vector<ll> ans;
        ll n = num;
        int count =0;
        for(int i=2; i*i<n; i++){
            if(n%i == 0){
                count++;
                n/=i;
                ans.push_back(i);
            }
            if(count == 2){
                ans.push_back(n);
            }
        }
        if(count<2){
            cout << "NO" << endl;
        }
        else if(ans[0] == ans[1] || ans[0] == ans[2]){
            cout << "NO" <<endl;
        }
        else{
            cout << "YES" << endl;
            cout << ans[0] <<" "<<ans[1] <<" "<< ans[2] <<endl;
        }
    }
    return 0;
}