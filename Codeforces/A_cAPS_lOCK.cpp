#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
   string str;
   cin>>str;
   int capital = 0;
   int small = 0;
   for(auto &x:str){
    if(x>='A' && x<='Z'){
        capital++;

    }
    if(x>='a' && x<='z'){
        small++;
    }
   }
   if(small == 0 || ((str[0]>='a' && str[0]<='z') && capital == str.size()-1)){
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i]+32;
        }
    }
    if(small !=0) str[0] = str[0]-32;
    cout <<str << endl;
   }
   else{
    cout << str << endl;
   }
    return 0;
}