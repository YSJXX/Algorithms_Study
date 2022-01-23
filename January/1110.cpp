#include <bits/stdc++.h>
int main(){
    char N[100];
    int x,y,c=0;
    int ans[2];
    scanf("%s",N);
    if(strlen(N)==1){
        x = 0;
        y = (int)N[0]-48;
    }else{
        x = (int)N[0]-48;
        y = (int)N[1]-48;
    }
    
    ans[0] = x;
    ans[1] = y;
    while(1){
        int sum = x+y;
        x = y;
        y = sum/10 == 0 ? sum : sum%((sum/10*10);
        ++c;
        if(ans[0] == x && ans[1] == y) break;
    }
    printf("%d\n",c);
    return 0;
}