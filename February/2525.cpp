#include <bits/stdc++.h>
using namespace std;

void solve(){
    int H,M;cin>>H>>M;
    int C;cin>>C;
    int add = M+C;
    cout<<(add/60 > 0 ? (H+(add/60))%24 : H)<<" "<<add%60<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}