#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    char ch;
    while(ch!='}'){
        cin>>ch;
        str+=ch;
    }
    // cout << str << endl;
    set<char> st;
    for(auto &x:str){
        if(x>='a' && x<='z'){
            st.insert(x);
        }
    }
    cout << st.size() << endl;
    return 0;
}