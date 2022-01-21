#include <bits/stdc++.h>

int jmax(int x,int y){ return x > y ? x : y; }
int main(){
    char A[1002];
    char B[1002];
    int dp[1002][1002]={0,};
    scanf("%s",A);
    scanf("%s",B);
    int Alen = strlen(A);
    int Blen = strlen(B);

    for(int i=1;i<=Alen;++i){
        for(int j=1;j<=Blen;++j){
            dp[i][j] = A[i-1] == B[j-1] ? dp[i-1][j-1]+1 : jmax(dp[i-1][j],dp[i][j-1]);
        }
    }
    printf("%d\n",dp[Alen][Blen]);
    return 0;
}