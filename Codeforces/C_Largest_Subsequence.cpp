#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!



void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================


int32_t main(){
 
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--){
        ll n; 
        string str;
        cin >> n;  
        cin >> str;
        vector<ll> lex_idx;
        
        for (ll i = 0; i < n; i++) {
            while (!lex_idx.empty() && (str[i] > str[lex_idx.back()])) lex_idx.pop_back();
            lex_idx.push_back(i);
        }
 
        ll lex_size = lex_idx.size();
        ll first = str[lex_idx[0]];
        ll dup =  0;
        for(ll i = 0 ; i < lex_size ; i++) {
            if(str[lex_idx[i]] == first)
                dup++;
        }
        for (ll i = 0; i < lex_size/2; i++) 
            swap(str[lex_idx[i]], str[lex_idx[lex_size - 1 - i]]);
            
        if(is_sorted(str.begin(), str.end()))
            cout<<lex_size-dup<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}

    