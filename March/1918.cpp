#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str; cin>>str;
    string ans;
    stack<char> S;
    for(int i=0;i<str.length();++i){
        if(str[i] >= 40 && str[i] <= 47){ // +, -, *, /, ( ,) 에 해당하면
            if(!S.empty() 
            && (((S.top() == '+' || S.top() == '-') && (str[i] == '+' || str[i] == '-'))
            || ((S.top() == '*' || S.top() == '/') && (str[i] == '*' || str[i] == '/'))
            || ((S.top() == '*' || S.top() == '/') && (str[i] == '+' || str[i] == '-'))
            )){
                while(!S.empty()){
                    if((((S.top() == '+' || S.top() == '-') && (str[i] == '+' || str[i] == '-'))
                    || ((S.top() == '*' || S.top() == '/') && (str[i] == '*' || str[i] == '/'))
                    || ((S.top() == '*' || S.top() == '/') && (str[i] == '+' || str[i] == '-')))){
                        ans.push_back(S.top());
                        S.pop();
                    }
                    else break;
                }
                S.push(str[i]);
            }
            else if(str[i] == ')') {
                while(true){
                    if(S.top() == '('){
                        S.pop();
                        break;
                    }
                    ans.push_back(S.top());
                    S.pop();
                }
            }
            else S.push(str[i]);
        }
        else // 아니면 문자
            ans.push_back(str[i]);
    }
    while(!S.empty()) {
        ans.push_back(S.top());
        S.pop();
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}