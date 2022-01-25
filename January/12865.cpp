#include <stdio.h>

int DP[101][100001];
int W[101];
int V[101]; 

int max(int a,int b) {return a>b?a:b;}

int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    for(int i=1;i<=N;++i) scanf("%d %d", &W[i], &V[i]);
    
    for(int i=1;i<=N;++i){
        for(int j=1;j<=K;++j){
            if (j - W[i] >= 0) DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - W[i]] + V[i]);
            else DP[i][j] = DP[i-1][j];
        }
    }
    printf("%d\n",DP[N][K]);
    return 0;
}