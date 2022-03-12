#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,K;cin>>N>>K;
    vector<int> d(K*2+1,0x3f3f3f3f);
    queue<int> Q;
    d[N]=0;
    Q.push(N);
    while(!Q.empty()){
        int cur = Q.front();
        Q.pop();
        if(cur == K) {
            cout<<d[cur]<<'\n';
            break;
        }
        if(d[cur-1] > d[cur]+1){
            d[cur-1] = d[cur]+1;
            Q.push(cur-1);
        }
        if(d[cur+1] > d[cur]+1) {
            d[cur+1] = d[cur]+1;
            Q.push(cur+1);
        }
        if(cur*2 < 200001 && d[cur*2] > d[cur]){
            d[cur*2] = d[cur];
            Q.push(cur*2);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}