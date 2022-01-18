#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    int arr[1001]={0,};
    int dp[1001]={0};
    int maxx = 0;
    for(int i=0;i<N;++i) cin>>arr[i];
    for(int i=0;i<N;++i){
        for(int j=0;j<i;++j){
            if(arr[i] > arr[j] && dp[i] < dp[j]) dp[i]=dp[j];
        }
        ++dp[i];
        maxx = maxx < dp[i] ? dp[i] : maxx;
    }
    cout<<maxx<<'\n';
    return 0;
}