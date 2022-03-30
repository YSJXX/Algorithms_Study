#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,K;cin>>N>>K;
    int ans=1;
    vector<int> d(200001,0x7FFFFFFF); // 시간 저장
    queue<pair<int,int>> Q;// {수빈이 위치 , 시간};
    Q.push({N,0});  
    d[N]=0;
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        for(int nxt : {cur.first-1,cur.first+1,cur.first*2}){
            if(nxt < 0 || nxt > 200001) continue;  // 크기를 벗어나면
            if(nxt == K && d[nxt] == cur.second+1) ++ans;   // 방법 +1
            if(d[nxt] < cur.second+1) continue; // 시간 비교후 짧은 시간이 d[]에 저장
            d[nxt] = cur.second+1;
            Q.push({nxt,cur.second+1});
        }
    }
    cout<<d[K]<<'\n';
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}