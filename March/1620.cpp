#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,M;
    cin>>N>>M;

    unordered_map<string,string> um1;
    unordered_map<string,string> um2;
    for(int i=1;i<=N;++i) {
        string x; cin>>x;
        um1.insert({x,to_string(i)});
        um2.insert({to_string(i),x});
    }
    while(M--){
        string x; cin>>x;
        auto it = um1.find(x);
        if(it != um1.end()) cout<<it->second<<'\n';
        else cout<<um2[x]<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}