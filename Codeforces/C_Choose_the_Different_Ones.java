#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m, k;
        cin>>n>>m>>k;
        set<int> first;
        set<int> second;
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            first.insert(val);
        }
        for(int i=0; i<m; i++){
            int val;
            cin>>val;
            second.insert(val);
        }
        if(first.size()<k/2 || second.size()<k/2){
            cout << "NO" << endl;
        }
        else{
           bool jhanda = true;
            for(int i=1; i<=k; i++){
                bool flag1 = false;
                bool flag2 = false;
                if(first.find(i) == first.end()){
                    flag1 = true;
                }
                if(second.find(i) == second.end()){
                    flag2 = true;
                }
                if(flag1 && flag2){
                    cout << "No"<< endl;
                    jhanda = false;
                    break;
                }
            }
            if(jhanda == true) cout<< "YES" << endl;
        }
    }
    return 0;
}