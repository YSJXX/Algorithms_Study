#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N=0;cin>>N;
    int arr[2000001]={0};
    for(int i=0;i<N;++i) {
        int x;cin>>x;
        arr[x+1000000]++;
    }
    for(int i=0;i<=2000000;++i){
        while(arr[i]--){
            cout<<i-1000000<<'\n';
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}