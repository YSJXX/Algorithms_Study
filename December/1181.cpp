#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;cin>>N;
    pair<int,string> p[N];
    for(int i=0;i<N;++i) {
        string str;
        cin>>str;
        p[i].first = str.length();
        p[i].second = str;
    }
    sort(p,p+N);
    auto it = unique(p,p+N);
    for(auto iter=p;iter<it;++iter) cout<<iter->second<<'\n';
    return 0;
}