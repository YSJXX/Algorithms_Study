#include <bits/stdc++.h>
using namespace std;

void solve(){
    double A,B,V;cin>>A>>B>>V;
    cout<<(int)ceil((V-A)/(A-B))+1<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}