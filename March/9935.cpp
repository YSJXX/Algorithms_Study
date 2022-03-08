#include <bits/stdc++.h>
using namespace std;

void solve(){
    string st;cin>>st;
    string c4;cin>>c4;
    string ans;

    int c4len = c4.length();

    for(int i=0;i<st.length();++i){
        ans+= st[i];
        if(ans.back() != c4.back()) continue;       // 문장열 마지막 비교
        if(ans.length() < c4len) continue;          // 문자열 길이 비교
        if(ans.substr(ans.length()-c4len) != c4) continue;  // 문자 비교
        for(int x=0;x<c4len;++x)    // c4문자 삭제
            ans.pop_back();
    }
    if(ans == "") cout<<"FRULA\n";
    else cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}