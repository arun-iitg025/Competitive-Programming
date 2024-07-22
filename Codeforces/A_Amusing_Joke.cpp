#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b, c;
    cin>>a>>b>>c;
    map<char, int> mp1;
    for(auto &x:a){
        mp1[x]++;
    }
    for(auto &x:b){
        mp1[x]++;
    }
    map<char, int> mp2;
    for(auto &x:c){
        mp2[x]++;
    }
    bool flag = false;
    for(auto &x:mp1){
        if(x.second != mp2[x.first]){
            cout <<"NO" << endl;
            flag = true;
            break;
        }
    }
    bool flag2 = false;
    if(flag == false){
        for(auto &x:mp2){
            if(x.second != mp1[x.first]){
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
    }
    if(flag2 == false && flag == false)
    cout << "YES" << endl;
    return 0;
}