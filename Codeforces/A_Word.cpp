#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int first = 0;
    int second = 0;
    for(auto &x:str){
        if(x>='A' && x<='Z'){
            first++;
        }else{
            second++;
        }
    }
    if(first>second){
        for(int i=0; i<str.size(); i++){
            if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
        }
    }
    else{
        for(int i=0; i<str.size(); i++){
            if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
        }
    }
    cout << str << endl;
    return 0;
}