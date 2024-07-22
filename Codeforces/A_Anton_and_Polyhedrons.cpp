#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    while(n--){
        string str;
        cin>>str;
        if(str == "Icosahedron"){
            sum+=20;
        }
        else if(str == "Cube"){
            sum+=6;
        }
        else if(str == "Tetrahedron"){
            sum+=4;
        }
        else if(str == "Dodecahedron"){
            sum+=12;
        }
        else{
            sum+=8;
        }
    }
    cout << sum << endl;
    return 0;
}