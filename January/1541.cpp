#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

int main(){
    char str[51];
    char *s = str;
    char cp[51];
    scanf("%s",str);    
    int len =strlen(str);
    int sum=0,cnt=0,t=0;
    char ck = true;
    for(int i=0;i<=len;++i){
        if(str[i] == '-' || str[i] == '+' || i==len){
            memset(cp,0,51);
            strncpy(cp,s,t);
            s = str+cnt;
            t=0;
            int val = atoi(cp);
            if(ck) sum += val;
            else sum += val > 0 ? -val : val;
            
            if(str[i] == '-') ck = false;
        }
        ++cnt;
        ++t;
    }
    printf("%d\n",sum);
    return 0;
}

// int main(){
//    int i=0,n,a; char c;
//    for(scanf("%d",&n);scanf("%c",&c),c!=10;){
//       if(c=='-') i=1;
//       scanf("%d",&a);
//       printf("%d\n",a);
//       if(i) n-=a; else n+=a;
//    }
//    printf("%d",n);
// }