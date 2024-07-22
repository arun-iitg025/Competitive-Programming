#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        vector<int> first;
        for(int i=0; i<a; i++){
            int val;
            cin>>val;
            first.push_back(val);
        }
        unordered_map<int, int> mp;
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        for(int i=0; i<b; i++){
            int val;
            cin>>val;
            mp[val]++;
            mp1[val]++;
            mp2[val]++;
        }
        int sum = 0;
        for(auto &x:first){
            int prev = -1;
            int currSum = INT_MIN;
            for(auto &y:mp){
                if(abs(x-y.first)>currSum && y.second>0){
                    currSum = abs(x-y.first);
                    if(prev != -1){
                        mp[prev]++;
                    }
                    prev = y.first;
                    mp[y.first]--;
                   
                }
            }
            sum +=currSum;
        }
        sort(first.begin(), first.end());
        int sum1 = 0;
        for(auto &x:first){
            int prev1 = -1;
            int currSum1 = INT_MIN;
            for(auto &y:mp1){
                if(abs(x-y.first)>currSum1 && y.second>0){
                    currSum1 = abs(x-y.first);
                    if(prev1 != -1){
                        mp1[prev1]++;
                    }
                    prev1 = y.first;
                    mp1[y.first]--;
                   
                }
            }
            sum1 +=currSum1;
        }

        sort(first.begin(), first.end(), greater<int>());
        int sum2 = 0;
        for(auto &x:first){
            int prev2 = -1;
            int currSum2 = INT_MIN;
            for(auto &y:mp2){
                if(abs(x-y.first)>currSum2 && y.second>0){
                    currSum2 = abs(x-y.first);
                    if(prev2 != -1){
                        mp2[prev2]++;
                    }
                    prev2 = y.first;
                    mp2[y.first]--;
                   
                }
            }
            sum2 +=currSum2;
        }
        cout << max(sum2, max(sum, sum1)) << endl;
    }
    return 0;
}