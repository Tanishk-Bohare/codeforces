#include <bits/stdc++.h>
using namespace std;
 
#define P pair<int,int>
#define int64 int64_t
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define str string
#define vec(x) std::vector<x> 
#define nl '\n'
#define F first
#define Sec second
#define ll long long int
#define ALL(x) x.begin(),x.end() 
#define BN(x) x.begin()
#define ED(x) x.end()
#define MAP_traverse(it,x)  for(auto it = BN(x); it!= ED(x); it++)
#define Debug(x) for(auto y : x) {cout<<y<<" ";} cout<<nl;
#define PI 3.14159265358979323846264338327950L
#define rep(i,a,b) for(int i=a;i<b;i++)
const unsigned int M = 1000000007;
const int mxN=2e5;
const int N = 100031;


void solve(){
   int n; cin>>n;
   str s; cin>>s;
   int lol=0,lo=0;
   vec(int)v; int udrcsr = 0;
   for(int i=0;i<n;i++){
       if(s[i]=='-'){
           udrcsr++;
           if(i==0 || s[i-1]!='-')v.pb(0);
           v.back()++;
       }
       if(s[i]=='>')lol++;
       if(s[i]=='<')lo++;
   }
   if(udrcsr+lo==n || udrcsr+lol==n){
       cout<<n<<nl;
   }else if(lo==n || lol==n){
       cout<<n<<nl;
   }else{
       int u = s[0]=='-'&&s[n-1]==s[0]?1:0;
       //cout<<u<<" check"<<nl;
       int ans = 0;
       for(auto x:v){
           ans+=x+1;
       }
       cout<<ans-u<<nl;
   }
 
}
 
int main()
{
    IOS;
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
}