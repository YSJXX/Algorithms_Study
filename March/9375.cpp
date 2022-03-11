#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T;cin>>T;
    while(T--){
        int N;cin>>N;
        map<string,int> m;
        long long ans=1;
        string x,y;
        for(int i=0;i<N;++i){
            cin>>x>>y;
            ++m[y];
        }
        for(auto x : m) ans *= (x.second+1);
        cout<<ans-1<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}