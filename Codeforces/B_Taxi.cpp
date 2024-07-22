#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum = 0;
    for(int i=0; i<t; i++){
        int val;
        cin>>val;
        sum+=val;
    }

    int count = 0;
    count = sum/4;
    if(sum%4>0){
        count++;
    }
    cout << count << endl;
    return 0;
}