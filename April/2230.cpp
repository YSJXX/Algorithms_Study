#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,M;cin>>N>>M;

    vector<int> arr(N);
    for(int i=0;i<N;++i) cin>>arr[i];

    sort(arr.begin(),arr.end());

    int st=0,en=0,minx=0x7fffffff;
    while(en < N){
        if(arr[en]-arr[st] >= M){
            minx = min(minx,arr[en]-arr[st]);
            ++st;
            en = st;
        }else 
            ++en;
    }
    cout<<minx<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}

// 23:29 ~ 23:43