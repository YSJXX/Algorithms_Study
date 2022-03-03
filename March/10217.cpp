#include <bits/stdc++.h>
using namespace std;
typedef tuple<int,int,int> tiii;

void solve(){
    int T;cin>>T;
    while(T--){
        int N,M,K;cin>>N>>M>>K;
        vector<vector<int>> d(N+1,vector<int>(10003,0x3f3f3f3f)); 
        vector<vector<tiii>> node(N+1,vector<tiii>(N+1));
        priority_queue<tiii,vector<tiii>, greater<tiii>> pq;
        for(int i=0;i<K;++i){
            int u,v,c,t; cin>>u>>v>>c>>t;// u: 출발, v: 장쏘, c: 비용, t: 시간
            node[u].push_back({t,c,v}); // {시간,비용,장소}
        }
        d[1][0] = 0;    // d[i][j] i번 도시까지 비용 j를 써서 갈  떄 최소 시간
        pq.push({d[1][0],0,1});
        bool check = false;
        while(!pq.empty()){
            tiii cur = pq.top();
            pq.pop();
            int curtime = get<0>(cur);
            int curcost = get<1>(cur);
            int curloca = get<2>(cur);
            if(curloca == N){
                cout<<curtime<<'\n';
                check = true;
                break;
            }  
            if(d[curloca][curcost] < curtime) continue;
            for(tiii nxt : node[curloca]){
                int nxtTime = get<0>(nxt);
                int nxtCost = get<1>(nxt);
                int nxtLoca = get<2>(nxt);
                if(curcost + nxtCost > M) continue;
                if(d[nxtLoca][curcost + nxtCost] <= curtime + nxtTime) continue;
                d[nxtLoca][curcost + nxtCost] = curtime + nxtTime;
                pq.push({curtime + nxtTime,curcost+nxtCost,nxtLoca});
            }
        }
        if(!check) cout<<"Poor KCM\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}

// 11:26