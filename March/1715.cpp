#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    int ans=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<N;++i) {
        int x;cin>>x;
        pq.push(x);
    }
    int i=0;
    while(i < N-1){
        int a = pq.top();pq.pop();
        int b = pq.top();pq.pop();
        ans += (a+b);
        pq.push(a+b);
        ++i;
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}
