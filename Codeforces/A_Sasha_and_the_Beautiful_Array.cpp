#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            arr.push_back(val);

        }
        int ans = 0;
        sort(arr.begin(), arr.end());
        for(int i=1; i<n; i++){
            ans+=arr[i]-arr[i-1];
        }
        cout << ans << endl;
    }
    return 0;
}