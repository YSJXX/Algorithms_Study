#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    int dp[5001]={0};
    
    dp[3] = dp[5] = 1;
    for(int i=6;i<=N;++i){
        if(dp[i-3]) dp[i] =  dp[i-3]+1;      // 3의 배수 값 확인
        if(dp[i-5]) dp[i] = dp[i] ? min(dp[i],dp[i-5]+1) : dp[i-5]+1;   // 5의 배수 값 확인
    }
    if(dp[N]) cout<<dp[N]<<'\n';
    else cout<<"-1\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}