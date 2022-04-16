#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    
    vector<int> arr(N);
    for(int i=0;i<N;++i) cin>>arr[i];

    int X;cin>>X;

    sort(arr.begin(),arr.end());
    
    int st=0,en=N-1,ans=0;
    int tmp=en;
    while(st < en){
        while(arr[st]+arr[en] != X && st < en) --en;
        if(st != en && arr[st]+arr[en] == X){
            ++ans;
        }else {
            en = --tmp;
        }
        ++st;
    }

    cout<<ans<<'\n';
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
