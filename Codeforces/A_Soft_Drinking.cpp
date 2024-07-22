#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink = k*l;
    total_drink = total_drink/nl;
    int total_slice = c*d;
    int total_salt = p/np;
    int ans = (min(total_drink, min(total_salt, total_slice)))/n;

    cout << ans << endl;

    return 0;
}