#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(26,-1);
    string str; cin>> str;
    for(int i=0;i<str.size();++i){
        arr[str[i]-97] = arr[str[i]-97] != -1 ? arr[str[i]-97]: i;
    }
    for(auto& i:arr) cout<<i<<' ';
    cout<<'\n';
    return 0;
}