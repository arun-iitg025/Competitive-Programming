#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    string str = "";
    for(int i=1; i<=n; i++){
        string ch = to_string(i);
        str+=ch;
        if(str.size() == n) break;
    }
    cout << str[n-1] << endl;
    return 0;
}