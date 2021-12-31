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
bool cmp(int a,int b){ return a>b;}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin>>N>>M;
    vec.assign(++N,false);
    // for(int i=1;i<N;++i)
    dfs(0);
    // sort(ans.begin(),ans.end());
    // for(int i=0;i<ans.size();++i){
    //     cout<<ans[i];
    //     if((i+1)%M==0) cout<<'\n';
    //     else cout<<' ';
    // }
    
    return 0;
}