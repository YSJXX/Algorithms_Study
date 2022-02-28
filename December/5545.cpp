#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N=0;cin>>N;     // 토핑 개수
    int A=0,B=0;cin>>A>>B;  // 도우 가격, 토핑 가격
    int C=0;cin>>C;     // 도우 열량
    vector<int> arr(N+1,0);
    // for(auto& i:arr) cin>>i;    // 토핑 열량
    for(int i=1;i<=N;++i){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    int t=0,x=0,max=0;
    for(int i=0;i<=N;i++){
                 // (열량) / (도우 가격 + (토핑 가격 * 토피 개수))
        max = max < (C+t)/(A+(B*(i))) ? (C+t)/(A+(B*(i))):max;
        t+= arr[i];
    }
    cout<<max<<'\n';
    return 0;
}