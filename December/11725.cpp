#include <bits/stdc++.h>
using namespace std;
typedef struct _Node{
    vector<int> v;
    int parents;
    bool check = false;
}Node;
Node node[100001];

void dfs(int i){
    node[i].check = true;
    
    for(int x=0;x<node[i].v.size();++x){
        int next = node[i].v[x];
        if(!node[next].check){
            node[next].parents = i;
            dfs(next);
        }
    }
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;cin>>N;
    ++N;
    int a,b;
    for(int i=2;i<N;++i){
        cin>>a>>b;
        node[a].v.push_back(b);
        node[b].v.push_back(a);
    }
    dfs(1);
    for(int i=2;i<N;++i) cout<<node[i].parents<<'\n';

    return 0;
}