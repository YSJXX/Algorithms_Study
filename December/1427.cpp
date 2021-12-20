#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v;
    string arr;
    cin>>arr;
    for(int i=0;i<arr.length();++i) v.push_back(arr[i]-'0');
    sort(v.begin(),v.end(),greater<int>());
    for(auto& x:v) cout<<x;
    cout<<'\n';
    return 0;
}