#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;scanf("%d",&N);
    int a;
    vector<int> v(10001,0);
    for(int i=1;i<=N;++i) {
        scanf("%d",&a);
        ++v[a];
    }
    for(int i=1;i<10001;++i) {
        if(v[i]!=0)
            for(int x=0;x<v[i];++x) printf("%d\n",i);
    }
    return 0;
}