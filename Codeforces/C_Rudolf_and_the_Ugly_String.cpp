#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<char, int> mp;
        string str;
        cin>>str;
        for(auto &x:str){
            mp[x]++;
        }
        int mini = INT_MAX;
        mini = min(mp['p'], min(mp['m']+mp['i'], min(mp['m']+mp['e'], min(mp['a']+mp['i'], mp['a']+mp['e']))));
        cout << mini << endl;
    }
    return 0;
}
