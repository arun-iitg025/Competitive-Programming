#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even = 0;
        int odd = 0;
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            if(val%2 != i%2){
                if(i%2 ==0) even++;
                else odd++;
            }
        }
        if(even == odd) cout << even << endl;
        else cout << -1 << endl;
    }
    return 0;
}