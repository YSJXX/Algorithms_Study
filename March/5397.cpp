#include <bits/stdc++.h>
using namespace std;

void solve(){
    int T;cin>>T;
    while(T--){
        string str;
        cin>>str;
        
        list<char> ans;
        auto it = ans.begin();
        ++it;
        for(auto S : str){
            if(S == '<'){
                if(!ans.empty() && it != ans.begin()) --it;
            }
            else if(S == '>'){
                if(it != ans.end()) ++it;
            }
            else if(S == '-'){
                if(!ans.empty() && it != ans.begin()) {
                    it = ans.erase(--it);
                }
            }
            else{
                ans.insert(it,S);
            }
        }
        for(auto a : ans) cout<<a;
        cout<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}