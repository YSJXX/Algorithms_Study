#include <stdio.h>
void F(int i,int j,int N){
    if(i/N%3 == 1 && j/N%3 == 1) printf(" ");
    else if(N/3 == 0) printf("*");
    else F(i,j,N/3);
}
int main(){
    int N;scanf("%d",&N);
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            F(i,j,N);
        }
        printf("\n");
    }
    return 0;
}