#include <stdio.h>
int main(){
    int N;scanf("%d",&N);
    while(N--){
        int C;scanf("%d",&C);
        int sum=0,av=0,arr[C];
        double ans = 0;
        for(int i=0;i<C;++i){
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
        av = sum/C;
        for(int i=0;i<C;++i){
            if(av < arr[i]) ++ans;
        }
        printf("%.3f%\n",(double)(ans/C)*100);
    }
    return 0;
}