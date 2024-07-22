#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag = false;
    while(n--){
        if(!flag){
            cout << "I hate ";
            flag =true;
        }else{
            cout <<"I love ";
            flag = false;
        }
        if(n>=1){
            cout <<"that ";
        }
        else{
            cout <<"it ";
        }
    }
    return 0;
}