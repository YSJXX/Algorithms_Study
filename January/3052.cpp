#include <stdio.h>
int main(){
    int A,ans=0;
    int arr[43]={0};
    while(scanf("%d",&A) != -1) {
        arr[A%42] += 1;
        if(arr[A%42] == 1) ++ans;
    }
    printf("%d\n",ans);
    
    return 0;
}