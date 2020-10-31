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
    str s; cin>>s;
    stack<char>ss;

    for(auto x:s){
        if(x=='A' || ss.empty())ss.push('A');
        else if(x=='B'){
            if(ss.empty())ss.push(x);
            if(ss.top()=='A' || ss.top()=='B')ss.pop();
        }
        // cout<<ss.size()<<" mop"<<nl;
    }
    cout<<ss.size()<<nl;
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



