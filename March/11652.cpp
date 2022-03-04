#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    int cnt=1;
    long long mxval = pow(-2,62)-1;
    int mxcnt = 0;
    vector<long long> v(N);
    for(int i=0;i<N;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=1;i<=N;++i){
        if(v[i-1] == v[i]) ++cnt;
        else{
            if(cnt > mxcnt){
                mxcnt = cnt;
                mxval = v[i-1];
            }
            cnt = 1;
        }
    }
    cout<<mxval<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}