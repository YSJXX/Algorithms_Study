#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long N;cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;++i) cin>>v[i];
    sort(v.begin(),v.end());
    for(auto& x:v) cout<<x<<'\n';
    return 0;
}