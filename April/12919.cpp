#include <bits/stdc++.h>
using namespace std;

string S;
bool d(string T){
    if(T == S)
        return true;

    if(T.length() < S.length())
        return false;
    
    bool check = false;
    
    string t1(T),t2(T);
    if(t1.back() == 'A'){
        t1.pop_back();
        if(d(t1)) return true;
    }
    

    reverse(t2.begin(),t2.end());
    if(t2.back() == 'B'){
        t2.pop_back();
        if(d(t2)) return true;
    }

    return false;
}

void solve(){
    string T;cin>>S>>T;

    if(d(T)) cout<<1<<'\n';
    else cout<<0<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}