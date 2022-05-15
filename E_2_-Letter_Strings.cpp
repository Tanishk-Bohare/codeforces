#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    int n;
    cin>>n;
    long long int ans=0;
    string s;
    vector<vector<int>>cnt(12, vector<int>(12,0));
    for(int i=0;i<n;++i){
        cin>>s;
        for(int j=0;j<2;++j){
            for(char c= 'a';c<='k';++c){
                if(s[j]==c)continue;
                string a=s;
                a[j]=c;
                ans+= cnt[a[0]-'a'][a[1]-'a'];
            }
        }
        cnt[s[0]-'a'][s[1]-'a']++;
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