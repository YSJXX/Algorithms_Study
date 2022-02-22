#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

void solve(){
    const int INF = 0x3f3f3f3f;
    int V,E,ST;cin>>V>>E>>ST;
    vector<int> d(V+1,0x3f3f3f3f);
    vector<vector<pair<int,int>>> node(V+1);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for(int i=1;i<=E;++i){
        int u,v,w;cin>>u>>v>>w;
        node[u].push_back({w,v});
    }

    d[ST]=0;
    pq.push({d[ST],ST});
    while(!pq.empty()){
        pair<int,int> cur  = pq.top();
        pq.pop();
        if(d[cur.Y] != cur.X)  continue;
        for(auto nxt : node[cur.Y]){
            if(d[nxt.Y] <= d[cur.Y]+nxt.X) continue;
            d[nxt.Y] = d[cur.Y]+nxt.X;
            pq.push({d[nxt.Y],nxt.Y});
        }
    }
    for(int i=1;i<=V;++i){
        if(d[i] == INF) cout<<"INF\n";
        else cout<<d[i]<<'\n'; 
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}