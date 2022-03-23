#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,M;cin>>N>>M;
    
    vector<int> ans;
    priority_queue<int> q;
    vector<int> d(N+1,0);
    vector<int> node[32001];
    int A,B;
    for(int i=0;i<M;++i){
        cin>>A>>B;
        ++d[B];
        node[A].push_back(B);
    }

    for(int i=1;i<=N;++i){
        if(d[i] == 0) q.push(i);
    }

    while(!q.empty()){
        int cur = q.top(); q.pop();
        cout << cur << ' ';
        for(int nxt : node[cur]){
            d[nxt]--;
            if(d[nxt] == 0) q.push(nxt);
        }
    }
    cout<<'\n';
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}