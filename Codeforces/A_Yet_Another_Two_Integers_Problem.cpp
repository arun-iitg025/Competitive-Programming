#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a == b) cout << 0 << endl;
        else if(a<b){
            int diff = b-a;
            int count = diff/10;
            int rem = diff%10;
            if(rem>0)count++;
            cout << count << endl;
        }
        else{
            int diff = a-b;
            int count = diff/10;
            int rem = diff%10;
            if(rem>0)count++;
            cout << count << endl;
        }
    }
    return 0;
}