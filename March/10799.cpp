#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin>>str;
    
    stack<char> s;
    int len = str.length();
    int stick = 0;
    int ans = 0;
    for(int i=0;i<len;++i){
        if(str[i] == ')'){
            --stick;
            if(s.top() == ')') ++ans;
            else ans += stick;;
        }else
            ++stick;
        s.push(str[i]);
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}