#include <bits/stdc++.h>
using namespace std;
int main(){
    // cin.tie(nullptr)->sync_with_stdio(false);
    int N;cin>>N;
    vector<int> arr(N),id(N);
    stack<int> s;
    for(auto& i:arr) cin>>i;
    s.push(0);
    for(int i=1;i<N;++i){
        while(!s.empty() && arr[s.top()] < arr[i]){
            id[s.top()]=arr[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        id[s.top()]=-1;
        s.pop();
    }
    for(auto& i:id) cout<<i<<'\n';
    return 0;
}