#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    set<char> st;
    for(auto &x:str){
        st.insert(x);
    }
    if(st.size()%2 == 1){
        cout << "IGNORE HIM!" << endl;
    }
    else{
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}