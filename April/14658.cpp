#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
void solve(){
    int N,M,L,K;
    int ans=101;
    cin>>N>>M>>L>>K;
    
    vector<pair<int,int>> arr(K);
    for(int i=0;i<K;++i){
        int x,y;
        cin>>x>>y;
        arr[i]= {x,y};
    }

    for(int i=0;i<K;++i){
        for(int j=0;j<K;++j){
            int cnt = 0;
            int x = arr[i].X;
            int y = arr[j].Y;
            for(int k=0;k<K;++k){
                int nx = arr[k].X;
                int ny = arr[k].Y;
                if(x<=nx && x+L>=nx && y<=ny && y+L>=ny) ++cnt;
            }
            ans = min(ans,K-cnt);
        }
    }

    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}