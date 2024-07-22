#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;
    cin>>n>>m;
    
    int k = min(n,m);
    if(k%2 == 0){
        cout << "Malvika" << endl;
    }
    else{
        cout << "Akshat" << endl;
    }
    return 0;
}