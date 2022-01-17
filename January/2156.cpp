#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int N;cin>>N;
    int arr[10001];
    int dp[10001];

    for(int i=1;i<=N;++i) cin>>arr[i];

    dp[1] = arr[1];
    dp[2] = dp[1]+arr[2];
    for(int i=3;i<=N;++i){
        int x = (dp[i-2] + arr[i]);
        int y = (dp[i-3] + arr[i-1] + arr[i]);
        int z = dp[i-1];
        dp[i] = x > max(y,z) ? x : max(y,z);
    }
    int maxx=0;
    for(int i=1;i<=N;++i){
        if(maxx < dp[i]) maxx = dp[i];
    }
    cout<<maxx<<'\n';
    return 0;
}