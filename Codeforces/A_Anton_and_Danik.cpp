#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first = 0;
    int second = 0;
    for(int i=0; i<n; i++){
        char ch;
        cin>>ch;
        if(ch == 'A'){
            first++;
        }
        else{
            second++;
        }
    }
    if(first>second){
        cout << "Anton" << endl;
    }
    else if(first<second){
        cout << "Danik" << endl;
    }
    else{
        cout <<"Friendship" << endl;
    }
    return 0;
}