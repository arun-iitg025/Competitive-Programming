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

        int max_element max_element(arr.begin(), arr.end());
        cout << max_element << endl;
    }
    return 0;
}