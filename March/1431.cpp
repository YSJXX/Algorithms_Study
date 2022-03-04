#include <bits/stdc++.h>
using namespace std;

// a가 b의 앞에 와야할 때 true
bool cmp(const string& a, const string& b){
    if(a.length()  != b.length()) return a.length() < b.length();
    if(a.length() == b.length()){
        int aN=0,bN=0;  //  a,b 숫자의 합을 담을 변수
        int len = a.length();
        for(int i=0;i<len;++i){
            if(a[i] >= '0' && a[i] <='9') aN += a[i]-'0';
            if(b[i] >= '0' && b[i] <='9') bN += b[i]-'0';
        }
        if(aN != bN) return aN < bN;
        else return a < b;
    }
}
void solve(){
    int N;cin>>N;
    vector<string> v;
    for(int i=0;i<N;++i){
        string x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x : v)
        cout<<x<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}