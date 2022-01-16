#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    int dp[101][11]= {0,};
    int cnt=0;
    for(int i=1;i<10;i++) {
        dp[1][i] = 1;
    }

    for(int i=2;i<=N;i++){
        for(int j=0;j<10;j++){
            if(j == 0) {
                dp[i][j] = dp[i-1][j+1];
            } else if(j == 9){
                dp[i][j] = dp[i-1][j-1];
            }  else{
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]);
            }
            dp[i][j] %= 1000000000;
        }
    }
    for(int i=0;i<10;i++){
        cnt = (cnt+dp[N][i]) %1000000000;
    }
    cout<<cnt<<'\n';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    int dp[101][10]={0,};
    for (int i = 1; i < 10; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0)
                dp[i][0] = dp[i - 1][j + 1];
            else if (j == 9)
                dp[i][9] = dp[i - 1][j - 1];
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];

            dp[i][j] %= 1000000000;
        }
    }

    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        cnt = (cnt + dp[n][i]) % 1000000000;
    }
    cout << cnt << "\n";

    return 0;
}