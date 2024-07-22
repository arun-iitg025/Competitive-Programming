#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    int n = t;
    t--;
    vector<int> arr;
    while(t--){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int a, b;
    cin>>a>>b;
    int ans = 0;
    for(int i=a-1; i<b-1; i++){
        ans+=arr[i];
    }
    cout << ans << endl;
    return 0;
}