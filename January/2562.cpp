#include <stdio.h>
int main(){
    int N,x,max=0;
    for(int i=1;i<=9;++i){
        scanf("%d",&N);
        if(max < N){
            max = N;
            x=i;
        }
    }
    printf("%d\n",x);
    return 0;
}