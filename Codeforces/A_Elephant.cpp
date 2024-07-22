#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    
    while(n>=5){
        count++;
        n-=5;
    }
    while(n>=4){
        count++;
        n-=4;
    }
    while(n>=3){
        count++;
        n-=3;
    }
    while(n>=2){
        count++;
        n-=2;
    }
    while(n>=1){
        count++;
        n-=1;
    }
    cout << count << endl;
    
    return 0;
}