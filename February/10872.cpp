#include <stdio.h>

int F(int j){
    if(j == 1 || j == 0) return 1;
    return j * F(j-1);
}
int main(){
    int N;scanf("%d",&N);
    printf("%d\n",F(N));
    return 0;
}