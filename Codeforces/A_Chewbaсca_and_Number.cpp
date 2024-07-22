#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str;
    cin>>str;
    int length = str.size();
    int f = str[0]-'0';
    if(f == 9){
        str[0] = '9';
    }
    else{
        if(f>4)
        str[0] = ((9-f)+'0');
    }
    for(int i=1; i<length; i++){
        int a = str[i]-'0';
        if(a<5 || a == 0){
            continue;
        }
        else{
            str[i] = ((9-a)+'0');
        }
    }
    cout << str;
    return 0;
}