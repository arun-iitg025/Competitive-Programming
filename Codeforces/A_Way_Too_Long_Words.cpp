#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n = str.size();
        if(n>10){
            string a = str.substr(0,1);
            string b = str.substr(n-1,1);
            --n;
            --n;
            string c = to_string(n);
            cout << a+c+b << endl;
        }
        else{
            cout << str << endl;
        }
    }
    return 0;
}