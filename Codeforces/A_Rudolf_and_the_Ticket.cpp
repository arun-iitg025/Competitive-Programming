#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> left;
        vector<int> right;

        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            left.push_back(val);
        }
        for(int i=0; i<m; i++){
            int val;
            cin>>val;
            right.push_back(val);
        }
        int count = 0;
        for(auto &x:left){
            for(auto &y:right){
                if(x+y<=k) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}