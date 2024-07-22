#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int val = 1;
        int count = 1;
       while(count != k){
            val++;
            if(val%3 == 0 || val%10 == 3){
                continue;
            }
            else{
                count++;
                
            }
        }
        cout << val << endl;
    }
    return 0;
}