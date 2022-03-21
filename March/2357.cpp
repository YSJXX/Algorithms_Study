#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<long long> arr(100001);
vector<long long> MAX(N+1,0);
vector<long long> MIN(N+1,0xFFFFFFFF);

void update(int i,int val){
    while(i<=N){
        MAX[i] = MAX[i] > val ? MAX[i] : val;
        MIN[i] = MIN[i] < val ? MIN[i] : val;
        i += (i&-i);
    }
}

long long prefix(int i){
    
}
void solve(){
    cin>>N>>M;

    for(int i=1;i<=N;++i) {
        cin>>arr[i];
        update(i,arr[i]);
    }
    
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