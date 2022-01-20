#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    int arr[501]={0};
    int dp[501]={0};
    // int test[500] = {2,3,4,1,5};
    int m=1,t=0;
    for(int i=0;i<N;++i) {
        int x=0;
        cin>>x;
        cin>>arr[x];
        t = t > x ? t : x;
        // arr[i]=test[i];
    }
    for(int i=1;i<=t;++i){
        if(arr[i]==0) continue;
        dp[i]=1;
        for(int j=1;j<i;++j){
            if(arr[i]>arr[j] && dp[j]+1 > dp[i]) dp[i]=dp[j]+1;
        }
        m = m > dp[i] ? m : dp[i];
    }
    cout<<N-m<<'\n';
    return 0;
}