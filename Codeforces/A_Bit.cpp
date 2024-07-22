#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans = 0;
    while(t--){
        string str;
        cin>>str;
        if(str == "X++" || str == "++X"){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout << ans <<endl;
    return 0;
}