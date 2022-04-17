#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    vector<int> arr(N);

    for(int i=0;i<N;++i) cin>>arr[i];
    sort(arr.begin(),arr.end());
    
    int minx=0x7fffffff;
    int st=0,en=N-1;
    pair<int,int> ans;
    
    while(st < en){
        int x = abs(arr[st] + arr[en]);
        if(minx > x){
            minx = x;
            ans.first = arr[st];
            ans.second = arr[en];
            if(x == 0) break;   // 0이 나왔다면 더 찾을 필요 없으므로 break
        }
        if(arr[st] + arr[en] > 0) --en;
        else ++st;
    }
    cout<<ans.first<<" "<<ans.second<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}