#include <stdio.h>

int d(int n){
    int N = n;
    while(n>0){
        N += n%10;
        n = n/10;
    }
    return N;
}
int main(){
    
    int arr[10001];
    int ck;
    for(int i=1;i<10001;++i){
        ck = d(i);
        if(ck < 10001) arr[ck]=1;
    }
    for(int i=1; i<10001; i++) {
        if(arr[i]!=1)
            printf("%d\n", i);
    }
    return 0;
}