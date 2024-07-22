#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;
    while(true){
        year++;
        set<int> st;
        st.insert(year/1000);
        st.insert(year/100%10);
        st.insert(year/10%10);
        st.insert(year%10);
        if(st.size() == 4){
            cout<< year << endl;
            break;
        }
    }
    return 0;
}