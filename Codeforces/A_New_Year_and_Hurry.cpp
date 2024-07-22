#include<bits/stdc++.h>
using namespace std;
int main(){
    int coding, party_time;
    cin>>coding>>party_time;
    int total_time = 240;
    int rem = total_time-party_time;
    int i=1;
    int count = 0;
    while(5*i<=rem && i<=coding){
        rem-=5*i;
        count++;
        i++;
    }
    cout << count << endl;
    return 0;
}