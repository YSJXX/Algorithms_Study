#include <bits/stdc++.h>
using namespace std;

int F(int K, int N){
    if(N==1) return 1;
    if(K==0) return N;
    return (F(K-1, N) + F(K, N-1));
}

void solve(){
    int T;cin>>T;
    while(T--){
        int K,N;cin>>K>>N;
        cout<<F(K,N)<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}