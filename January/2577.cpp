#include <stdio.h>
int main(){
    int A,B,C;scanf("%d %d %d",&A,&B,&C);
    long long R = A*B*C;
    int ans[11]={0};
    while(1){
        ans[R%10]++;
        R = R/10;
        if(R == 0) break;
    }
    for(int i=0;i<=9;++i)
        printf("%d\n",ans[i]);
    return 0;
}