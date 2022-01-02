#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<bool> vec;
vector<int> ans(10);
unordered_set< string > s;
void dfs(int dep){
    if(dep == M) {
        string tmp;
        vector<int> cp = ans;
        sort(cp.begin(),cp.begin()+M);
        for(int i=0;i<M;++i) tmp.append(to_string(cp[i]));
        if(s.insert(tmp).second == false) return;
        for(int i=0;i<M;++i)
            cout<<cp[i]<<" ";
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