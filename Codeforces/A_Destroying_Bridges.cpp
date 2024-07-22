#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b>=a-1) cout << 1 << endl;
        else{
            cout << a << endl;
        }
    }
    return 0;
}