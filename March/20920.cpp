#include <bits/stdc++.h>
using namespace std;
// struct cmp{
//     bool operator()(pair<string, int> m1,pair<string, int> m2) const{
//         if(m1.second == m2.second) {
//             if(m1.first.length() == m2.first.length()) return m1.first.compare(m2.first) < 0 ? true : false;
//             return m1.first.length() > m2.first.length();
//         }
//         return m1.second > m2.second;
//     }
// };

bool cmp(pair<string,int> m1, pair<string,int> m2){
        if(m1.second == m2.second) {
            if(m1.first.length() == m2.first.length()) return m1.first.compare(m2.first) < 0 ? true : false;
            return m1.first.length() > m2.first.length();
        }
        return m1.second > m2.second;
}


void solve(){
    int N,M;cin>>N>>M;
    
    unordered_map<string,int> um;
    string str;
    while(N--){
        cin>>str;
        if(str.length() < M) continue;
        ++um[str];
    }
    vector<pair<string,int>> vec(um.begin(),um.end()); 
    sort(vec.begin(),vec.end(),cmp);
    for(auto ans:vec) cout<<ans.first<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}

// 21:34 ~ 22:30