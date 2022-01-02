#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<int> ans(10);
void dfs(int dep,int y){
    if(dep == M) {
        for(int i=0;i<M;++i)
            cout<<ans[i]<<" ";
        cout<<'\n';
        return;
    }
    for(int i=y;i<=N;++i){
        ans[dep]=i;
        dfs(dep+1,i);
    }
    return;
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin>>N>>M;
    dfs(0,1);

    return 0;
}