#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int first = 0;
        int second = 0;
        for(auto &x:str){
            if(x == 'A') first++;
            else second++;
        }
        if(first>second) cout <<"A" << endl;
        else cout << "B" << endl;
    }
    return 0;
}