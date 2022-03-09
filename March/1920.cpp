#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    map<int,int> m;
    for(int i=0;i<N;++i){
        int x;cin>>x;
        ++m[x];
    }
    int M;cin>>M;
    while(M--){
        int x;cin>>x;
        if(m[x]) cout<<1<<'\n';
        else cout<<0<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}