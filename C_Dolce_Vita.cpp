#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    int n, x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;++i)cin>>v[i];
    sort(v.begin(), v.end());
    long long int ans=0, s=0;
    for(int i=0;i<n;++i){
        s+=v[i];
        if(x>=s)
        ans+= (x-s)/(i+1)+1;
    }
    
    cout<<ans<<endl;
}

int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}