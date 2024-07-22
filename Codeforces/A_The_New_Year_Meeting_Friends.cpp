#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int mini = INT_MAX;
    mini = min(mini, abs(a-b) + abs(a-c));
    mini = min(mini, abs(b-a) + abs(b-c));
    mini = min(mini, abs(c-a) + abs(c-b));
    cout << mini << endl;
    
    return 0;
}