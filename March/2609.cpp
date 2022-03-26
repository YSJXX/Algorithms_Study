#include <bits/stdc++.h>
using namespace std;

void solve(){
    int A,B;cin>>A>>B;
    int ans1,ans2;
    
    
    int a=max(A,B),b=min(A,B),c=-1;
    while(true){
        c = a%b;
        if(c == 0) break;
        a = b;
        b = c;
    }
    ans1 = b;   // 최대 공약수
    ans2 = (A*B)/ans1;
    cout<<ans1<<'\n';
    cout<<ans2<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}