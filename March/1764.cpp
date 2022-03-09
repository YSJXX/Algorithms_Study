#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,M;
    cin>>N>>M;
    vector<string> v,ans;
    v.resize(N);
    for(int i=0;i<N;++i) cin>>v[i];

    sort(v.begin(),v.end());
    string x;
    for(int i=0;i<M;++i){
        cin>>x;
        if(binary_search(v.begin(),v.end(),x)) ans.push_back(x);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<'\n';
    for(int i=0;i<ans.size();++i) cout<<ans[i]<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}