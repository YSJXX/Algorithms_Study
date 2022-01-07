#include <bits/stdc++.h>
using namespace std;

typedef struct _Fibo{
    int x;
    int y;
    bool ck=false;
}Fibo;
Fibo fibo[40];
Fibo fibonacci(int n) {
    if(fibo[n].ck == true) return fibo[n];
    if (n == 0) {
        ++fibo[n].x;
        fibo[n].ck = true;
        return fibo[n];
    } else if (n == 1) {
        ++fibo[n].y;
        fibo[n].ck = true;
        return fibo[n];
    } else {
        Fibo temp1 = fibonacci(n-1);
        Fibo temp2 = fibonacci(n-2);
        fibo[n].x += temp1.x;
        fibo[n].y += temp1.y;
        fibo[n].x += temp2.x;
        fibo[n].y += temp2.y;
        fibo[n].ck = true;
        return fibo[n];
    }
}
int main(){
    int T;cin>>T;
    int x;
    for(int i=0;i<T;++i) {
        cin>>x;
        fibonacci(x);
        cout<<fibo[x].x<<'\n';
        cout<<fibo[x].y<<'\n';
    }
    return 0;
}