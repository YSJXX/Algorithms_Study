#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int N,M,X;  // N: 학생 수 , M: 도로 수 , X: 파티 장소
vector<int> dijkstra(vector<int> d, int st,vector<vector<pair<int,int>>> node){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;    
    d[st]=0;
    pq.push({d[st],st});
    while(!pq.empty()){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(d[cur.Y] != cur.X) continue;
        for(auto nxt : node[cur.Y]){
            if(d[nxt.Y] <= d[cur.Y]+nxt.X) continue;
            d[nxt.Y] = d[cur.Y] + nxt.X;
            pq.push({d[nxt.Y], nxt.Y});
        }
    }
    return d;
}

void solve(){
    cin>>N>>M>>X;
    vector<int> d(N+1,0x3f3f3f3f);
    vector<int> d2(N+1,0x3f3f3f3f);
    vector<vector<pair<int,int>>> node(N+1);
    vector<vector<pair<int,int>>> node2(N+1);
    int len=0;
    for(int i=0;i<M;++i){
        int a,b,c;cin>>a>>b>>c;
        node[a].push_back({c,b});
        node2[b].push_back({c,a});
    }

    d = dijkstra(d,X,node);
    d2 = dijkstra(d2,X,node2);
    
    for(int i=1;i<=N;++i){
        int tmp = d[i] + d2[i];
        len = len > tmp ? len : tmp;
    }
    cout<<len<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}