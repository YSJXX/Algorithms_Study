#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
typedef pair<char,int> pp;
int cmp(pp a,pp b){return a.second > b.second;}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string str; cin>>str;
    unordered_map<char,int> m;
    for(int i=0;i<str.size();++i){
        if(str[i]>90) str[i]-=32;
        ++m[str[i]];
    }
    vector<pp> v(m.begin(),m.end());
    sort(v.begin(),v.end(),cmp);
    printf("%c\n",v[0].second == v[1].second ? '?' : v[0].first);
    return 0;
}