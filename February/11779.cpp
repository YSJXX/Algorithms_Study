#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
void solve(){
    int N,M;cin>>N>>M;

    vector<int> d(N+1,0x3f3f3f3f);
    vector<int> pre(N+1);
    vector<vector<pair<int,int>>> node(N+1);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    
    for(int i=1;i<=M;++i){
        int u,v,w;cin>>u>>v>>w;
        node[u].push_back({w,v});
    }
    
    int st,end; cin>>st>>end;

    d[st]=0;
    pq.push({d[st],st});
    while(!pq.empty()){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(d[cur.Y] != cur.X) continue;
        for(auto nxt : node[cur.Y]){
            if(d[nxt.Y] <= d[cur.Y]+nxt.X) continue;
            pre[nxt.Y] = cur.Y;
            d[nxt.Y] = d[cur.Y]+nxt.X;
            pq.push({d[nxt.Y],nxt.Y});
        }
    }
    cout<<d[end]<<'\n';
    vector<int> ans;
    while(end!=0){
        ans.push_back(end);
        end = pre[end];
    }
    cout<<ans.size()<<'\n';
    for(int i=ans.size()-1;i>=0;--i)
        cout<<ans[i]<<" ";
    cout<<'\n';

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}