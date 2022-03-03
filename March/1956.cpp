#include <bits/stdc++.h>
using namespace std;

void solve(){
    int V=0,E;cin>>V>>E;
    int d[V+1][V+1];
    int ans=0x3f3f3f3f;
    for(int i=0;i<=V;++i){
        fill(d[i],d[i]+V+1,0x3f3f3f3f);
    }
    
    for(int i=0;i<E;++i){
        int a,b,c;cin>>a>>b>>c;
        d[a][b]=c;
    }

    for(int k=1;k<=V;++k){
        for(int i=1;i<=V;++i){
            for(int j=1;j<=V;++j){
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            }
            ans = min(ans,d[i][i]);
        }
    }
    if(ans == 0x3f3f3f3f) ans=-1;
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}
