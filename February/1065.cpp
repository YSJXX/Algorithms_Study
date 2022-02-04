#include <stdio.h>

int F(int x){
    int tempNum=0;
    if(x < 100) return 1;
    else{
        int a = x%10;
        x/=10;
        int b = x%10;
        x/=10;
        tempNum = a-b;
        while(x > 0){
            a = b;
            b = x%10;
            x/=10;
            if(tempNum != a-b) return 0;
            tempNum = a-b;
        }
        return 1;
    }
}
int main(){
    int N;scanf("%d",&N);
    int ans=0;
    for(int i=1;i<=N;++i){
        if(F(i)) ++ans;
    }
    printf("%d\n",ans);
    return 0;
}


// #include <stdio.h>

// int F(int x){
//     if(x < 100)
//         return 1;
//     else if(x < 1000){
//         if((x%10) - (x/10%10) == (x/10%10) - (x/10/10%10))
//             return 1;
//     }
//     return 0;
// }
// int main(){
//     int N;scanf("%d",&N);
//     int ans=0;
//     for(int i=1;i<N;++i){
//         if(F(i)) ++ans;
//     }
//     printf("%d\n",ans);
//     return 0;
// }