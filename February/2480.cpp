#include <bits/stdc++.h>
using namespace std;

void solve(){
    int A,B,C;cin>>A>>B>>C;
    if(A == B && B == C){
        cout<<10000+(A*1000)<<'\n';
    }else if(A == B || A == C || B == C){
        if(A == B || A == C) cout<<1000+(A*100)<<'\n';
        else cout<<1000+(B*100)<<'\n';
    }else
        cout<<max(A,max(B,C))*100<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}