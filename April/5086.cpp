#include <bits/stdc++.h>
using namespace std;

void solve(){
    while(true){
        int X,Y;cin>>X>>Y;
        if(X == 0 && Y == 0) break;
        if(X<Y){
            if(Y%X == 0) cout<<"factor\n";
            else cout<<"neither\n";
        }else{
            if(X%Y == 0) cout<<"multiple\n";
            else cout<<"neither\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}