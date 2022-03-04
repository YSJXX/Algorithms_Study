#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N=0,M=0;cin>>N>>M;
    int arr1[N],arr2[M];
    int ans[N+M];
    for(int i=0;i<N;++i) cin>>arr1[i];
    for(int i=0;i<M;++i) cin>>arr2[i];

    int a1=0,a2=0;
    for(int i=0;i<N+M;++i){
        if(a1 < N && a2 < M){
            if(arr1[a1] < arr2[a2]) ans[i] = arr1[a1++];
            else ans[i] = arr2[a2++];
        }else{
            if(a1 >= N) ans[i] = arr2[a2++];
            else ans[i] = arr1[a1++];
        }
        cout<<ans[i]<<" ";
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}