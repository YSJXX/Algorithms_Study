#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[501][501];
    int sum[501][501]={0,};
    int N;cin>>N;
    for(int i=1;i<=N;++i){
        for(int j=1;j<=i;++j){
            cin>>arr[i][j];
        }
    }
    sum[1][1]=arr[1][1];
    int maxx=0;
    for(int i=2;i<=N;++i){
        for(int j=1;j<=i;++j){
            sum[i][j]=max(sum[i-1][j-1],sum[i-1][j]) + arr[i][j];
            if(i==N) maxx = maxx < sum[i][j] ? sum[i][j] : maxx;
        }
    }
    cout<<(N>1?maxx:arr[1][1])<<'\n';
    return 0;
}

