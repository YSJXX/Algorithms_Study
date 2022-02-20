#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long N;cin>>N;
    long long i=0;
    for(long long sum=2; sum <= N; i++)
        sum += 6*i;
    if(N == 1) i=1;
    cout<<i<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}