#include <bits/stdc++.h>
using namespace std;
int N,K;

void solve(){
    int dx[3] = {-1,1,2};
    vector<int> cnt(200001,0);
    queue<int> Q;
    Q.push(N);
    cnt[N] = 0;
    while(!Q.empty()){
        int cur = Q.front();
        if(cur == K) {
            cout<<cnt[cur]<<'\n';
            break;
        }
        Q.pop();
        for(int i=0;i<3;++i){
            int nx;
            if(i==2) nx = cur * dx[i];
            else nx = cur + dx[i];
            if(nx < 0 || nx >= 200001) continue;
            if(cnt[nx] != 0) continue;
            Q.push(nx);
            cnt[nx] = cnt[cur] +1;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>K;
    solve();
    return 0;
}