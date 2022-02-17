#include <bits/stdc++.h>
using namespace std;

void solve(){
    int V,E;cin>>V>>E;
    vector<vector<int> > node(V+1);
    vector<bool> vis(V+1,false);
    vector<bool> color(V+1,false);
    queue<int> Q;

    for(int i=0;i<E;++i){
        int a,b;cin>>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
    }
    int start=1;
    while(start){
        color[start] = true;
        vis[start] = true;
        Q.push(start);
        while(!Q.empty()){
            int cur = Q.front();
            Q.pop();
            for(auto next=node[cur].begin();next!=node[cur].end();++next){
                if(vis[*next] && color[*next] == color[cur]){
                    cout<<"NO\n";
                    return;
                };
                if(vis[*next]) continue;
                Q.push(*next);
                vis[*next]=true;
                color[*next]= !color[cur];
            }
        }
        
        for(int i=1;i<vis.size();++i){
            start = vis[i] == true ? 0 : i;
        }
    }
    cout<<"YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K;cin>>K;
    for(int i=0;i<K;++i)
        solve();    
    return 0;
}