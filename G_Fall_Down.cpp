#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<char>>g(n, vector<char>(m));
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            cin>>g[i][j];

    int s, st;
    for(int j=0;j<m;j++){
        s=0;
        st=n-1;
        for(int i=n-1;i>=0;--i){
            if(g[i][j]=='.')continue;
            else if(g[i][j]=='*'){
                s++;
                g[i][j]='.';
            }
            else{
                for(int k=st;k>=i+1;k--){
                    if(s>0)
                        g[k][j]= '*';
                    else g[k][j] = '.';
                    // cout<<"here ";
                    s--;
                }
                st= i-1;
                s=0;
            }
        }
        for(int k=st;k>=0;k--){
            if(s>0)
                g[k][j]= '*';
            else g[k][j] = '.';
            // cout<<"here ";
            s--;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j)
            cout<<g[i][j];
        cout<<endl;
    }
    cout<<endl;
}

int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}