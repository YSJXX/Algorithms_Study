#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T;cin>>T;
    while(T--){
        int A,B;cin>>A>>B;
        int ans1;
        
        
        int a=max(A,B),b=min(A,B),c=-1;
        while(true){
            c = a%b;
            if(c == 0) break;
            a = b;
            b = c;
        }
        ans1 = (A*B)/b;  // 최소 공배수 ::  최대 공약수 * 최소 공배수 =  두 수의 곱
        cout<<ans1<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}