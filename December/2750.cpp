#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;scanf("%d",&N);
    vector<int> v(N);
    for(int i=0;i<N;++i) cin>>v[i];
    sort(v.begin(),v.end());
    for(auto& x:v) cout<<x<<'\n';
    return 0;
}