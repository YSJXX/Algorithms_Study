#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    
    unordered_set<int> S;
    while(N--){
        string str;
        int num;
        cin>>str;
        if(str == "add") {
            cin>>num;
            S.insert(num);
        }
        else if(str == "remove") {
            cin>>num;
            if(!S.empty()) S.erase(num);
        }
        else if(str == "check"){
            cin>>num;
            if(!S.empty() && S.find(num) != S.end()) cout<<1<<'\n';
            else cout<<0<<'\n';
        }
        else if(str == "toggle"){
            cin>>num;
            if(!S.empty() && S.find(num) != S.end()) S.erase(num);
            else S.insert(num);
        }
        else if(str == "all") {
            if(!S.empty()){
                S.clear();
                for(int i=1;i<=20;++i) S.insert(i);
            }
        }
        else S.clear();
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}