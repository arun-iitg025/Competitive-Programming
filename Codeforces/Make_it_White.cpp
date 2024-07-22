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
        bool flag = true;
        int first = 0;
        int second = 0;
        for(int i=0; i<str.size(); i++){
            if(str[i] == 'B'){
                if(flag == true) {
                    first = i;
                    flag = false;
                }
                else{
                    second = i;
                }
            }
        }
        if(second == 0) cout <<1<< endl;
        else cout << second - first+1 << endl;
    }
    return 0;
}