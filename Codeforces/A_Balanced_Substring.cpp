#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        bool flag = false;
        if(n == 1){
            cout <<"-1 -1" << endl;
        }
        else{
            for(int i=0; i<n-1; i++){
                if(str[i]!=str[i+1]){
                    cout << i+1 <<" "<< i+2<< endl;
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                cout << "-1 -1"<< endl;
            }
        }
    }
    return 0;
}