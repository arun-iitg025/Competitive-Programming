#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int dsa, toc, dm;
        int dsa1, toc1, dm1;
        cin>>dsa>>toc>>dm;
        cin>>dsa1>>toc1>>dm1;
        int count  = dsa+toc+dm;
        int count1 = dsa1+toc1+dm1;

        if(count1 < count){
            cout << "DRAGON" <<endl;
        }
        else if(count1>count){
            cout << "SLOTH" << endl;
        }
        else{
            if(dsa>dsa1){
                cout << "DRAGON" << endl;
            }
            else if(dsa<dsa1){
                cout << "SLOTH" << endl;
            }
            else{
                if(toc>toc1){
                    cout << "DRAGON" << endl;
                }
                else if(toc<toc1){
                    cout << "SLOTH" << endl;
                }
                else{
                    cout << "TIE" << endl;
                }
            }
        }
    }
    return 0;
}