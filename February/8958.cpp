#include <stdio.h>
#include <string.h>
int main(){
    int N;scanf("%d",&N);
    for(int i=0;i<N;++i){
        char str[81];
        int arr[81]={0},ans=0;
        scanf("%s",str);
        if(str[0] == 'O') {
            arr[0] = 1;
            ans += arr[0];
        }
        for(int j=1;j<strlen(str);++j){
            if(str[j] == 'O'){
                arr[j] = arr[j-1] > 0 ? arr[j-1]+1 : 1;
                ans += arr[j];
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}