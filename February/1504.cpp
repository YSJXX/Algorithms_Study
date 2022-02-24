#include <bits/stdc++.h>
using namespace std;
void solve(){
    int V,E;cin>>V>>E;
    vector<vector<int>> d(V+1,vector<int>(V+1,0x2a2a2a2a));

    for(int i=0;i<E;++i){
        int a,b,c;cin>>a>>b>>c;
        d[a][b] = c;
        d[b][a] = c;
    }
    for(int i=1;i<=V;++i) d[i][i] = 0;
    int v1,v2;cin>>v1>>v2;

    for(int k=1;k<=V;++k){
        for(int i=1;i<=V;++i){
            for(int j=1;j<=V;++j){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    int ans = d[1][v1] + d[v1][v2] + d[v2][V] < d[1][v2] + d[v2][v1] + d[v1][V] ? d[1][v1] + d[v1][v2] + d[v2][V] : d[1][v2] + d[v2][v1] + d[v1][V];
    if(ans >= 0x2a2a2a2a) cout<<"-1\n";
    else cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}