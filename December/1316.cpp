#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;cin>>N;
    int cnt=N;
    for(int i=0;i<N;++i){
        string str=" ",T;
        int v[30]={0};
        cin>>T;
        str.append(T);
        for(int x=1;x<str.size();++x){
            if(v[str[x]-97] > 0 && str[x-1] != str[x]){
                --cnt;
                break;
            }
            else v[str[x]-97]++;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}