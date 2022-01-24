#include <stdio.h>
int main(){
    int N=0;scanf("%d",&N);
    int arr[N];
    int dp[N];
    int MaxV=-1001;
    scanf("%d",&arr[0]);
    dp[0] = arr[0];
    MaxV = dp[0];
    for(int i=1;i<N;++i) {
        scanf("%d",&arr[i]);
        dp[i] = dp[i-1]+arr[i] > arr[i] ? dp[i-1]+arr[i] : arr[i];
        MaxV = MaxV > dp[i] ? MaxV : dp[i];
    }
    printf("%d\n",MaxV);
    return 0;
}
