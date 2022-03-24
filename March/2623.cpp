#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,M;cin>>N>>M;

    vector<int> deg(N+1,0);
    vector<int> node[1001];
    priority_queue<int,vector<int>,greater<int>> q;
    while(M--){
        int X;cin>>X;
        int tmp=0;
        for(int i=1;i<=X;++i){
            int A;cin>>A;
            if(i==1) tmp = A;
            else{
                ++deg[A];
                node[tmp].push_back(A);
                tmp = A;
            }
        }
    }
    
    for(int i=1;i<=N;++i){
        if(deg[i] == 0 ) q.push(i);
    }
    vector<int> ans;
    while(!q.empty()){
        int cur = q.top();
        q.pop();
        ans.push_back(cur);
        for(int nxt : node[cur]){
            --deg[nxt];
            if(deg[nxt]==0) q.push(nxt);
        }
    }
    if(ans.size() != N) cout<<0<<'\n';
    else for(int a:ans) cout<<a<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}