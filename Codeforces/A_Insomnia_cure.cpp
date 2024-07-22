#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    map<int, bool> mp;
    int count = 0;
    int i=k;
    while(k<=d){
        if(mp[k] == false){
            count++;
            mp[k] = true;
        }
            k+=i;
    }
    i=l;
    while(l<=d){
        if(mp[l] == false){
            mp[l] = true;
            count++;
        }
            l +=i;
    }
    i=m;
    while(m<=d){
        if(mp[m] == false){
            mp[m] = true;
            count++;
        }
            m +=i;
    }
    i=n;
    while(n<=d){
        if(mp[n] == false){
            mp[n] = true;
            count++;
        }
            n +=i;
    }
    cout << count << endl;
    
    return 0;
}