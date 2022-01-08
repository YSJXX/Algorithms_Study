#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int T;cin>>T;
    for(int i=0;i<T;++i){
        int N;cin>>N;
        long long arr[101];
        arr[1]=1,arr[2]=1,arr[3]=1,arr[4]=2,arr[5]=2;
        for(int x=6;x<=N;++x){
            arr[x]=arr[x-1]+arr[x-5];
        }
        cout<<arr[N]<<'\n';
    }
    return 0;
}