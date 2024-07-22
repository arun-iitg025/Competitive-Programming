#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string str, ttr;
    cin>>str>>ttr;
    int i = 0;
    int j = ttr.size()-1;
    while(i<= str.size() && j>=0){
        if(str[i] != ttr[j]){
            cout << "NO" << endl;
            return 0;
        }
        i++;
        j--;
    }
    cout << "YES" << endl;
    return 0;
}