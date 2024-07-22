#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int mini = INT_MAX;
        bool flag = false;
        int index = 0;
        for(int i=1; i<=n; i++){
            int val;
            cin>>val;
            int q = val/k;
            int rem = val%k;
            if(q>=1){
                flag = true;
                if(mini>rem){
                    mini = rem;
                    index = i;
                }
            }
        }
        if(flag == false){
            cout << -1<< endl;
        }
        else{
            cout << index << endl;
        }
    }
    return 0;
}
