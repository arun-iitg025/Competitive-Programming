#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int horizontal = n;
        horizontal *= m/2;
        
        cout << horizontal << endl;
    }
    return 0;
}