#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int N,M,V;
vector< vector<int> > v(N+1);
// vector<int> v[N+1](N);
vector<bool> vis(N+1);

void DFS(int cur){
    cout<<cur<<" ";
    vis[cur]=true;
    for(int i=0;i<v[cur].size();--i){
        int next = v[cur][i];
        if(!vis[next]) 
            DFS(next);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>N>>M>>V;

    for(int i=0;i<M;++i) {
        int x,y; 
        cin>>x>>y;
        v[x].push_back(y);
    }
    for(int i=1;i<=N;++i) sort(v[i].begin(),v[i].end());
    
    // for(int i=0;i<N;++i){
    //     for(int j=0;j<v[i].size();++j){
    //         cout<<i<<","<<v[i][j]<<'\n';
    //     }
    // }
    DFS(V);
    cout<<'\n';
    // stack<int> s;
    // s.push(V);
    // while(!s.empty()){
    //     int cur = s.top(); s.pop();
    //     if(vis[cur]) continue;
    //     vis[cur]=true;
    //     cout<<cur<<" ";
    //     for(int i=v[cur].size()-1;i>=0;--i){
    //         int next = v[cur][i];
    //         if(vis[next]) continue;
    //         s.push(next);
    //     }
    // }
    // cout<<'\n';

    // vector<bool> vis1(N+1);
    // queue<int> Q;
    // Q.push(V);
    // while(!Q.empty()){
    //     int cur = Q.front(); Q.pop();
    //     if(vis1[cur]) continue;
    //     vis1[cur]=true;
    //     cout<<cur<<" ";
    //     for(int i=0;i<v[cur].size();++i){
    //         int next = v[cur][i];
    //         if(vis1[next]) continue;
    //         Q.push(next);
    //     }
    // }
    // cout<<'\n';

    return 0;
}