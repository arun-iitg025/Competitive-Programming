#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    int height;
    cin>>height;
    vector<int> arr;

    while(t--){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size(); j++){
            if(abs(arr[i] - arr[j])<=height) ans++;
        }
    }
    cout << ans*2 << endl;
    return 0;
}