#include <stdio.h>
void hanoi(int n, int start, int to, int by)
{
    if(n == 1) printf("%d %d\n", start, to);
    else
    {
        hanoi(n-1,start,by,to);
        printf("%d %d\n",start,to);
        hanoi(n-1,by,to,start);
    }
}
int main() {
    int N;scanf("%d",&N);
    printf("%d\n",(1<<N)-1);
    hanoi(N,1,3,2);
}