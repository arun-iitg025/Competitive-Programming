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
        int mini = INT_MAX;

        for(int i=1; i<n; i++){
            mini = min(mini, arr[i] - arr[i-1]);
        }
        cout << mini << endl;
    }
    return 0;
}