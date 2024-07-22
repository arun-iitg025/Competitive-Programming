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
        sort(arr.begin(), arr.end());
        int ans = 0;
        ans+=abs(arr[0]-arr[n-1]);
        ans+=abs(arr[1]-arr[n-1]);
        ans+=abs(arr[0]-arr[n-2]);
        ans+=abs(arr[1]-arr[n-2]);
        cout << ans << endl;

    }
    return 0;
}