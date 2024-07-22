#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    string num;
    cin>>n>>num;
    vector<char> temp;
    set<char> st;
    bool flag = false;
    for(auto &x:num){
        if(x != '4' && x != '7'){
            flag = true;
        }
        st.insert(x);
    }
    if(st.size()>2){
        cout << "NO" << endl;
    }
    else{
        bool flag_1 = false;
        bool flag_2 = false;
        if(st.find('4') != st.end()) flag_1 = true;
        if(st.find('7') != st.end()) flag_2 = true;

        int first_half = 0;
        for(int i=0; i<n/2; i++){
            first_half+=(temp[i] -'0');
        }

        int second_half = 0;
        for(int i=n/2; i<n; i++){
            second_half += (temp[i] -'0');
        }

        if((flag_1 || flag_2) && first_half == second_half) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}