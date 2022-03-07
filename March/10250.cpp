#include <bits/stdc++.h>
using namespace std;

void solve(){
    int  T;cin>>T;
    while(T--){ // 2 2 4
        double H,W,N;
        cin>>H>>W>>N;                                       // 6 12 10
        int x = fmod(N,H) == 0 ? H*100 : fmod(N,H)*100;
        cout<<(x + ceil(N/H))<<'\n';       // fmod(N,H) = 4, ceil(N/H) = 2;  4*100 + 2 = 402
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}