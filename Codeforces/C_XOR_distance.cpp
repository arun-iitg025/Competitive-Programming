#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        int mini = INT_MAX;
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=0; i<=c; i++){
            if(c>1000000000000000000 && b>1000000000000000000 && a>1000000000000000000) break;
            int first = a^i;
            int second = b^i;
            mini = min(mini, abs(first-second));
        }
        cout << mini << endl;
    }
    return 0;
}