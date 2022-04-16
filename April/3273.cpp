#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    
    vector<int> arr(2000001,0);
    for(int i=0;i<N;++i){
        int x;cin>>x;
        ++arr[x];
    }

    int X;cin>>X;
    int ans=0;
    for(int i=0;i<X;++i) if(arr[i] != 0) ans += arr[X-i];
    cout<<ans/2<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}

// 5 12 7 10 9 1 2 3 11
// 1 2 3 5 7 9 10 11 12
// 1 2 3 5 7 9 10 15 19
// 1 3 4 5 6 11 12 14 18 21 42 : 15
// 21:53 ~ 
