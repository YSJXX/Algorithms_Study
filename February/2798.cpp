#include <stdio.h>
int main(){
    int N,M;scanf("%d %d",&N,&M);
    int arr[N];
    int max=0;
    for(int i=0;i<N;++i) scanf("%d", &arr[i]);
    
    for(int i=0;i<N;++i){
        for(int j=i+1;j<N;++j){
            for(int k=j+1;k<N;++k){
                if(k != i && k !=j) {
                    if(arr[i] + arr[j] + arr[k] <= M)
                        max = max > arr[i] + arr[j] + arr[k] ? max : arr[i] + arr[j] + arr[k];
                }
            }
        }
    }
    printf("%d\n",max);
    return 0;
}