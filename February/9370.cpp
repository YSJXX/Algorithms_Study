#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

void solve(){
    int T;cin>>T;
    while(T--){
        int n,m,t;cin>>n>>m>>t;
        int s,g,h;cin>>s>>g>>h;
        vector<vector<pair<int,int>>> node(n+1);
        vector<int> d(n+1,0x3f3f3f3f);
        vector<int> pre(n+1);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> list;
        for(int i=0;i<m;++i){
            int a,b,c;cin>>a>>b>>c;
            node[a].push_back({c,b});
            node[b].push_back({c,a});
        }
        d[s]=0;
        pre[s]=0;
        pq.push({d[s],s});
        while(!pq.empty()){
            pair<int,int> cur = pq.top();
            pq.pop();
            if(d[cur.Y] != cur.X) continue;
            for(auto nxt : node[cur.Y]){
                if(d[nxt.Y] <= d[cur.Y] + nxt.X) continue;
                d[nxt.Y] = d[cur.Y] + nxt.X;
                pre[nxt.Y] = cur.Y;
                pq.push({d[nxt.Y],nxt.Y});
            }
        }

        for(int i=0;i<t;++i){
            int x;cin>>x;
            list.push_back(x);
        }
        sort(list.begin(),list.end());
        for(int i=0;i<t;++i){
            int idx = list[i];
            bool g1=false,h1=false;
            while(pre[idx]){
                if(pre[idx] == g && !g1) g1=true;
                else if(pre[idx] == h && !h1) h1=true;
                if(g1 && h1) {
                    cout<<list[i]<<'\n';
                    break;
                }
                idx = pre[idx];
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}