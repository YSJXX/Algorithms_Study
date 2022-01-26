#include <stdio.h>
int main(){
    int N,K;scanf("%d %d",&N,&K);
    int arr[N];
    int ans=0;
    for(int i=0;i<N;++i) scanf("%d",&arr[i]);
    for(int i=N-1;i>=0;--i){
        if(K/arr[i] != 0) {
            ans += K/arr[i];
            K -= (K/arr[i])*arr[i];
        }
        if(K==0) break;
    }
    printf("%d\n",ans);
    return 0;
}