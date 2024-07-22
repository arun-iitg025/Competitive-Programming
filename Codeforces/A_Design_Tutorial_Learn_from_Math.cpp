#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
   if(t%2 == 0){
    cout << 4 << " "<< t-4;
   }
   else{
    if(9>t-9) cout << t-9 <<" "<< 9; 
    else cout << 9 << " "<< t-9<< endl;
   }
    return 0;
}