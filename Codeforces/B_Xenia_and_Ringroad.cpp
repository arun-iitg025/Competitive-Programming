#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;
    cin>>n>>m;
    int initial = 1;
    ll time = 0;
    while(m--){
        int present;
        cin>>present;
        if(present>=initial){
            time+=present - initial;
        }
        else{
            time+= n - (initial-present);
        }
        initial = present;
    }
    cout << time << endl;
    return 0;
}