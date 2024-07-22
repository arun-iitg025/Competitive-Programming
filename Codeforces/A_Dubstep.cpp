#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str;
    cin>>str;
    bool flag = true;
    for(int i=0; i<str.size(); i++){
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
            i+=2;
            if(flag == false){
                cout <<" ";
            }
            continue;
        }
        else{
            flag = false;
            cout << str[i];
        }
    }
    return 0;
}