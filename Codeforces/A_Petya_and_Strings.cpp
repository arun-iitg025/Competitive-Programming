#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    cin>>str1>>str2;
    for(int i=0;i<str1.size();i++)
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')    //checking for uppercase characters
			str1[i] = str1[i] + 32;         //converting uppercase to lowercase
	}
    for(int i=0;i<str2.size();i++)
	{
		if (str2[i] >= 'A' && str2[i] <= 'Z')    //checking for uppercase characters
			str2[i] = str2[i] + 32;         //converting uppercase to lowercase
	}
    
    for(int i=0; i<str1.size(); i++){
        if(str1[i] != str2[i]){
            if(str1[i]<str2[i]){
                cout << -1 << endl;
                break;
            }
            else{
                cout << 1 << endl;
            }
        }
    }
    return 0;
}