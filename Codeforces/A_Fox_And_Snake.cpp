#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    int flag = 2;
    int count = 0;
    while(1){
        if(count == row) break;
        for(int j=0; j<col; j++){
            cout <<"#";
        }
        count++;
        cout << endl;
        if(flag%2 == 0){
            if(count== row) break;
            for(int k=0; k<col-1; k++){
                cout <<".";
            }
            cout <<"#" << endl;
            flag++;
            count++;
        }
        else{
            if(count == row) break;
            cout << "#";
            for(int k=0; k<col-1; k++){
                cout<<".";
            }
            cout << endl;
            flag++;
            count++;
        }
    }
    return 0;
}