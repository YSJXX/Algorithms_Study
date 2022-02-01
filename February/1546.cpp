#include <stdio.h>
int main(){
    int N,max=0;scanf("%d",&N);
    double ans=0,arr[N];
    for(int i=0;i<N;++i){
        scanf("%lf",&arr[i]);
        max = max > arr[i] ? max : arr[i];
    }
    for(int i=0;i<N;++i) ans += (arr[i]/max)*100;
    printf("%f",ans/N);
    return 0;
}