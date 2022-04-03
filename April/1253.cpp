#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;++i)
        cin>>arr[i];

    sort(arr.begin(),arr.end());
    
    int ans=0;
    for(int i=0;i<N;++i){
        int left=0,right=N-1;
        while(left < right){
            int sum = arr[left] + arr[right];
            if(arr[i] < sum) --right;
            else if(arr[i] > sum) ++left;
            else {
                if(i != left && i != right){
                    ++ans;
                    break;
                }
                else if(i == left) ++left;
                else if(i == right) --right;
            }
        }
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}