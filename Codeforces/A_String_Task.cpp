#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
			str[i] = str[i] + 32;         //converting uppercase to lowercase
	}
    string ans = "";
    for(int i=0; i<str.size(); i++){
        if(str[i]  == 'a' || str[i]  == 'e' || str[i]  == 'i' || str[i]  == 'o' || str[i]  == 'u' || str[i]  == 'y'){
            continue;
        }
        else{
            ans +=".";
            ans+=str[i];
        }
    }
    cout << ans << endl;
    return 0;
}