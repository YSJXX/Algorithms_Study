#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,M;
    int x;
    cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;++i) cin>>v[i];
    sort(v.begin(),v.end());
    cin>>M;
    while(M--){
        cin>>x;
        // 값 x가 나온는 첫번째 idx - 마지막 idx 
        cout<<(upper_bound(v.begin(),v.end(),x) - lower_bound(v.begin(),v.end(),x))<<" ";
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}