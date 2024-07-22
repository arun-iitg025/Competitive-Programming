#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    int mishka = 0,chris = 0;

    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            mishka++;
        }
        if(a<b){
            chris++;
        }
    }
    if(mishka>chris) cout << "Mishka"      << endl;
    else if(mishka<chris) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    
    return 0;
}