#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n;
    int dp[10000];
    int sum = 0;
    int mini = 10000;

    cin >> m >> n;

    for(int i=1; i<=n; i++){
        dp[i] = i*i;
    }

    for(int i=1; i<=n; i++){
        if(m <= dp[i] && dp[i] <= n){
            sum += dp[i];
            mini = min(mini, dp[i]);
        }
    }

    if(sum == 0){
        cout << "-1\n";
    } else{
        cout << sum << "\n";
        cout << mini << "\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}