#include <stdio.h>
int N=0,cnt=0;
int F(int j){
    if(j==0) return 0;
    if(j==1) return 1;
    return F(j-1) + F(j-2);
}
int main(){
    scanf("%d",&N);
    printf("%d\n",F(N));
    return 0;
}