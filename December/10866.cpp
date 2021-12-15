#include <bits/stdc++.h>
using namespace std;
int main(){
    // cin.tie(nullptr)->sync_with_stdio(false);
    int front = 10001;
    int back = 10000;
    int N;cin>>N;
    int arr[20000];
    char str1[10];
    for(int i=0;i<N;++i){
        // string str1;
        // cin>>str1;
        scanf("%s",str1);
        if(str1[1] == 'u' && str1[5] == 'b') scanf("%d",&arr[++back]);
        else if(str1[1] == 'u' && str1[5] == 'f') scanf("%d",&arr[--front]);
        else if(str1[1] == 'o' && str1[4] == 'f') printf("%d\n",(back-front+1 ? arr[front++]:-1));
        else if(str1[1] == 'o' && str1[4] == 'b') printf("%d\n",(back-front+1 ? arr[back--]:-1));
        else if(str1[0] == 's') printf("%d\n",(back-front+1));
        else if(str1[0] == 'e') printf("%d\n",(back-front+1 ? 0:1));
        else if(str1[0] == 'f') printf("%d\n",(back-front+1 ? arr[front]:-1));
        else if(str1[0] == 'b') printf("%d\n",(back-front+1 ? arr[back]:-1));
    }
    return 0;
}
