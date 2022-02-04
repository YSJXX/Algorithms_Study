#include <stdio.h>
int main(){
    int N;scanf("%d",&N);
    int x=N+1;
    int min=N,ans,i;
    while(x--){
        ans=0,i=x;
        while(i){
            ans+=i%10;
            i/=10;
        }
        ans += x;
        if(ans == N) min = min < x ? min : x;
    }
    printf("%d\n",(min == N ? 0 : min));
    return 0;
}