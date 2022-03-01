#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

void solve(){
    int N=0,M=0;cin>>N>>M;
    vector<vector<pair<long long,long long>>> node(N+1);
    vector<long long> d(N+1);
    fill(d.begin(),d.begin()+N+1,0x3f3f3f3f);
    for(int i=1;i<=M;++i){
        long long a,b,d;cin>>a>>b>>d;
        node[a].push_back({d,b});
    }
    d[1]=0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;++j){
            if(d[j] == 0x3f3f3f3f) continue;
            for(pair<long long,long long> nxt : node[j]){
                if(d[nxt.Y] <= d[j]+nxt.X) continue;
                if(i==N){
                    cout<<"-1\n";
                    return;
                }
                d[nxt.Y] = d[j]+nxt.X;
            }
        }
    }
    for(int x=2;x<=N;++x){
        if(d[x] == 0x3f3f3f3f) cout<<"-1\n";
        else cout<<d[x]<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}