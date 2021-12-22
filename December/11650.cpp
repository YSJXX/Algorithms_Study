#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;cin>>N;
    pair<int,int> p[100000];
    for(int i=0;i<N;++i) {
        cin>>p[i].first;
        cin>>p[i].second;
    }
    sort(p,p+N);
    for(int i=0;i<N;++i) cout<<p[i].first<<" "<<p[i].second<<'\n';
    return 0;
}