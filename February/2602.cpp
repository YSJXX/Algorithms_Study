#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;cin>>N>>M;
    vector< vector<int> > v(N+1);
    for(int i=0;i<M;++i){
        int x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    queue<int> Q;
    vector<bool> vis(N+1,false);
    Q.push(1);
    int ans=0;
    while(!Q.empty()){
        int cur = Q.front();
        Q.pop();
        if(vis[cur]) continue;
        vis[cur]=true;
        ++ans;
        for(int i=0;i<v[cur].size();++i){
            int next = v[cur][i];
            Q.push(next);
        }
    }
    cout<<ans-1<<'\n';
    return 0;
}