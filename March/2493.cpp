#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    stack<pair<int,int>> s;
    
    int x;
    for(int i=1;i<=N;++i){
        cin>>x;
        while(!s.empty()){
            if(s.top().second >= x){
                cout<<s.top().first<<" ";
                break;
            }
            s.pop();
        }
        if(s.empty()) cout<<0<<" ";
        s.push({i,x});
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}