#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(2*b<c){
            cout << a*b << endl;
        }
        else{
            int even = a/2;
            int rem = a%2;
            cout << even*c + rem*b << endl;
        }
    }
    return 0;
}