#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<bool> vec;
vector<int> ans(9);
void dfs(int dep){
    if(dep == M) {
        for(int i=0;i<M;++i)
            cout<<ans[i]<<" ";
        cout<<'\n';
        return;
    }
    for(int i=1;i<N;++i){
        if(!vec[i]){
            vec[i]=true;
            ans[dep]=i;
            dfs(dep+1);
            vec[i]=false;
        }
    }
    return;
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin>>N>>M;
    vec.assign(++N,false);

    dfs(0);

    return 0;
}