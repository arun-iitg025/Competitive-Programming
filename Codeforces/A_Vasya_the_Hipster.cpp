#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,b;
    cin>>r>>b;
    if(r == b) cout << r <<" "<<0<<endl;
    else if(r<b){
        int rem = b-r;
        int left = rem/2;
        cout << r <<" "<< left<<endl;
    }
    else{
        int rem = r-b;
        int left = rem/2;
        cout << b <<" "<< left<<endl;
    }
    return 0;
}