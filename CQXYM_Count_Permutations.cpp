#include <bits/stdc++.h>
using namespace std;

#define int long long   
#define pii pair<int,int>
#define int64 int64_t
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define pb push_back
#define str string
#define ri(x) int x;cin>>x;
#define rl(x) ll x; cin>>x;
#define rs(x) str x; cin>>x;
#define rd(x) d x; cin>>x;
#define vec(x) std::vector<x> 
#define nl '\n'
#define all(x) x.begin(),x.end() 
#define debug(x) for(auto y : x) {cout<<y<<" ";} cout<<nl;
#define PI 3.14159265358979323846264338327950L
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define vi vector<int>
const unsigned int M = 1000000007;
// int n,m,k,q,d;
const int mxN=1e5+5;
const int N = 100031;
bool bad = false;
int oo = 1e16;

vector<int>dp(N);

void fact(){
    dp[1]=1;
    int ans = 1;
    for(int i=2;i<=N;i++){
        dp[i] = (dp[i-1]*i)%M; 
    }
}

void solve(){
    int n; cin>>n;
    if(n==1){
        cout<<1<<nl;
    }else{
        int res = 1;
        for(int i=3;i<=2*n;i++){
            res = (res*i)%M;
        }
        cout<<res<<nl;
    }
}

// TARGET - FOUR PROBLEMS

signed main(){
    // look for the test input, you dummy!
	IOS
    int t; cin>>t;
    // int t = 1;
    // fact();
    while(t--){
        solve();
    }
   
}
