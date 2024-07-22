#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    string temp;
    while(temp[temp.size()-1] != '?'){
        cin>>temp;
    }
    
    char ch = temp[temp.size()-2];
    
    if(ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}