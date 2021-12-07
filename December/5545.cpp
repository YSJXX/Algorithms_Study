#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N=0;cin>>N;
    int A=0,B=0;cin>>A>>B;
    int C=0;cin>>C;
    vector<int> arr(N);
    for(auto& i:arr) cin>>i;
    sort(arr.begin(),arr.end(),greater<int>());
    int t=0,x=0,max=0;
    for(int i=0;i<N;i++){
        max = max < (C+t)/(A+(B*(i))) ? (C+t)/(A+(B*(i))):max;
        t+= arr[i];
    }
    cout<<max<<'\n';
    return 0;
}