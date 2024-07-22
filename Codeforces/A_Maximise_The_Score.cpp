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
        for(int i=0; i<2*n; i++){
            int val;
            cin>>val;
            arr.push_back(val);
        }
        int sum = 0;
        sort(arr.begin(), arr.end());
        for(int i=0; i<2*n; i++){
            sum+=arr[i];
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}