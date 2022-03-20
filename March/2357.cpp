#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<long long> arr(100001);
void update(int st,int end){
    vector<long long> MAX(N+1,0);
    vector<long long> MIN(N+1,0xFFFFFFFF);
    for(int idx=st;idx<=end;++idx){
        int i = idx;
        while(i<=N){
            MAX[i] = MAX[i] > arr[idx] ? MAX[i] : arr[idx];
            MIN[i] = MIN[i] < arr[idx] ? MIN[i] : arr[idx];
            i += (i&-i);
        }
    }

    long long maxN=0;
    long long minN=0xFFFFFFFF;
    while(end>st){
        maxN = max(maxN,MAX[end]);
        minN = min(minN,MIN[end]);
        --end;
    }
    cout<<minN<<" "<<maxN<<'\n';
}

void solve(){
    cin>>N>>M;

    for(int i=1;i<=N;++i) cin>>arr[i];
    
    for(int i=0;i<M;++i){
        int a,b;cin>>a>>b;
        update(a,b);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}