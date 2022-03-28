#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    
    priority_queue<int,vector<int>,greater<int>> pq;
    
    int num;
    for(int i=0;i<N*N;++i){
        cin>>num;
        pq.push(num);
        if(pq.size() == N+1) pq.pop();
    }
    cout<<pq.top()<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}

//20:52 ~ 21:23