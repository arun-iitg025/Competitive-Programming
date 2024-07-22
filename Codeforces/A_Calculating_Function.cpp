#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    int sum = 0;
    if(n%2 == 0){
        sum = n/2;
    }
    else{
        sum = ((n+1)/2)*(-1);
    }
    cout << sum << endl;
    return 0;
}