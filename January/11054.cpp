#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int N;cin>>N;
    int ans=0;
    int arr[1001]={0};    
    for(int i=0;i<N;++i) cin>>arr[i];
    
    for(int i=0;i<N;++i){
        int left = 0;
        int right = 0;
        int dp1[1001]={0};
        int dp2[1001]={0};
        for(int l=i;l>=0;--l){
            for(int l2=l;l2<=i;l2++){
                if(arr[l]<arr[l2] && dp1[l] < dp1[l2]) dp1[l]=dp1[l2];
            }
            ++dp1[l];
            left = left < dp1[l] ? dp1[l] : left;
        }
        
        for(int r=i;r<N;r++){
            for(int r2=i;r2<r;r2++){
                if(arr[r]<arr[r2] && dp2[r] < dp2[r2]) dp2[r]=dp2[r2];
            }
            ++dp2[r];
            right = right < dp2[r] ? dp2[r] : right;
        }
        ans= ans < left+right ? left+right : ans;
    }
    cout<<ans-1<<'\n';
    return 0;
}