#include <bits/stdc++.h>
using namespace std;
#define TEMP 1
typedef struct _Node{
    map<int,int> m;
    bool visit;
}Node;
Node node[100001];
int maxLen,maxNode;
vector<int> last_len;

void dfs(int value,int move_len){
    if(node[value].visit) return;
    if(maxLen<move_len){
        maxLen = move_len;
        maxNode = value;
    }
    node[value].visit = true;
    for(auto& m:node[value].m){
        dfs(m.first,move_len+m.second);
    }
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int V;cin>>V;
    vector< int > vec[100001];
    
    // 값 입력
    int fr,to,dist;
    for(int i=0;i<V;++i){
        cin>>fr;
        while(true){
            cin>>to;
            if(to == -1) break;
            cin>>dist;
            node[fr].m.insert(make_pair(to,dist));
            node[to].m.insert(make_pair(fr,dist));
        }
    }
    dfs(1,0);
    for(auto& te:node) te.visit = false;
    maxLen = 0;
    dfs(maxNode,0);
    cout<<maxLen<<'\n';    

    return 0;
}