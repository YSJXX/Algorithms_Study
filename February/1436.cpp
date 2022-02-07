#include <stdio.h>
int main() {
    int N;scanf("%d",&N);
    int result = 665;
    int i, cnt = 0;
    while(cnt != N){
        result++;
        for(i=result;i>0;i /= 10){
            if(i % 1000 == 666){
                cnt++;
                break;
            }
        }
    }
    printf("%d\n",result);
    return 0;
}