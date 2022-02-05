#include <stdio.h>
 
int main() {
    int N;scanf("%d",&N);
    int result = 666;
    int i, cnt = 0;
    while(1){
        for(i=result;;i /= 10){
            if(i % 1000 == 666){
                cnt++;
                break;
            }
        }
        if(cnt == N){
            printf("%d\n",result);
            break;
        }
        result++;
    }
    return 0;
}