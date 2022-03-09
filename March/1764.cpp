#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,M;
    cin>>N>>M;
    unordered_set<string> s;
    vector<string> v;
    for(int i=0;i<N;++i){
        string x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<M;++i){
        string x;
        cin>>x;
        if(s.find(x) != s.end()) v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<'\n';
    for(auto x : v) cout<<x<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}