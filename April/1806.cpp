#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,M;cin>>N>>M;
    vector<int> arr(N);
    for(int i=0;i<N;++i)
        cin>>arr[i];

    int left=0,right=0,sum=arr[0];
    int ans = 100001;
    while(left <= right && right < N){
        if(sum < M) sum += arr[++right];
        else{
            ans = min(ans,right-left+1);
            sum -= arr[left++];
        }
    }
    if(ans == 100001) cout<<0<<'\n';
    else cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}