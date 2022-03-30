#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,K;cin>>N>>K;
    
    vector<int> arr(N);
    int tmp=0;
    for(int i=0;i<N;++i){
        cin>>arr[i];
        tmp = max(tmp,arr[i]);
    }
    vector<int> count(tmp+1,0);
    int r=0,l=0;
    int ans=0;
    while(r < N){
        if(count[arr[r]] < K){
            ++count[arr[r]];
            ++r;
        }else{
            --count[arr[l]];
            ++l;
        }
        ans = max(ans,r-l);
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}