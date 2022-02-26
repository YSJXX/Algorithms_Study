#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

vector<int> dijkstra(int st, vector<int> d, vector<vector<pair<int,int>>> node){
    d[st]=0;
    pq.push({d[st],st});
    while(!pq.empty()){
        pair<int,int> cur = pq.top();
        pq.pop();
        if(d[cur.Y] != cur.X) continue;
        for(auto nxt : node[cur.Y]){
            if(d[nxt.Y] <= d[cur.Y] + nxt.X) continue;
            d[nxt.Y] = d[cur.Y] + nxt.X;
            pq.push({d[nxt.Y],nxt.Y});
        }
    }
    return d;
}
void solve(){
    int T;cin>>T;
    while(T--){
        int n,m,t;cin>>n>>m>>t;
        int s,g,h;cin>>s>>g>>h;
        vector<vector<pair<int,int>>> node(n+1);
        vector<int> d(n+1,0x3f3f3f3f);
        vector<int> d2(n+1,0x3f3f3f3f);
        vector<int> ans;
        int tmp=0;
        for(int i=0;i<m;++i){
            int a,b,c;cin>>a>>b>>c;
            node[a].push_back({c,b});
            node[b].push_back({c,a});
            if((a == g && b == h) || (a == h && b == g))
                tmp = c;
        }
        d = dijkstra(s,d,node);
        int r1,r2; 
        if(d[g] > d[h]) {
            r1 = h;
            r2 = g;
        } else {
            r1 = g;
            r2 = h;
        }
        d2 = dijkstra(r2, d2, node);

        for(int i=0;i<t;++i){
            int x;cin>>x;
            ans.push_back(x);
        }
        sort(ans.begin(),ans.end());
        for(auto x : ans){
            if(d[x] >= d[r1] + tmp + d2[x]) cout<<x<<'\n';
        }
        
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}
//https://cocoon1787.tistory.com/437 참고 링크