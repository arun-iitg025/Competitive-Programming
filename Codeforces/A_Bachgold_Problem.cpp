#include <bits/stdc++.h>
using namespace std;

 int solve(int num){
    int digit_sum = 0;
    while(num > 9){
        digit_sum += num%10;
        num = num/10;
    }
    digit_sum+=num;
    return digit_sum;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        for(int i=1; i<=n; i++){
            if(i < 10){
                sum+=i;
            }
            else{
                cout << "Hallo" << endl;
                while(i >9){
                    int num = solve(i);
                    i = num;
                }
                sum+=i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
