#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,R=0;cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;++i) scanf("%1d",&arr[i]);
    for(int i:arr) R+=i;
    cout<<R<<'\n'; 
    return 0;
}