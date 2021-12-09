#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    for(int i=0;i<N;++i){
        int x=0; cin>>x;
        string str; cin>>str;
        for(auto& a:str) for(int b=0;b<x;++b) cout<<a;
        cout<<'\n';
    }
    return 0;
}