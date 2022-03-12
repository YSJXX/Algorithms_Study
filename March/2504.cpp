#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;cin>>str;    // "(()[[]])([])"
    stack<char> s;
    int range=0;
    int tmp = 1;
    int ans = 0;
    while(range < str.length()){
        if(str[range] == '('){
            tmp *= 2;
            s.push('(');
        }
        else if(str[range] == ')') {
            if(s.empty() || s.top() != '(') {
                ans = 0;
                break;
            }
            if(str[range-1] == '('){
                ans += tmp;
                tmp /=2;
                s.pop();
            }
            else{
                tmp /=2;
                s.pop();
            }
        }
        else if(str[range] == '['){
            tmp *=3;
            s.push('[');
        }
        else if(str[range] == ']'){
            if(s.empty() || s.top() != '['){
                ans = 0;
                break;
            }
            if(str[range-1] == '['){
                ans += tmp;
                tmp /=3;
                s.pop();
            }
            else{
                tmp /=3;
                s.pop();
            }
        }
        ++range;
    }
    if(!s.empty()) ans = 0;
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}