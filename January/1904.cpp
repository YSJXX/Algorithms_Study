#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    int ans[1000001];
    ans[0]=0,ans[1]=1,ans[2]=2;
    for(int i=3;i<=N;++i){
        ans[i]= (ans[i-2] + ans[i-1])%15746;
    }
    cout<<ans[N]<<'\n';
    return 0;
}