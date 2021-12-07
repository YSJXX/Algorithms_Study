#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin>>N;
    vector<int> arr(N);
    for(auto& i : arr) cin>>i;
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<N;i++){
        if(arr[i+2] == '\0') {
            cout<<"-1\n";
            break;
        }
        if(arr[i] < arr[i+1]+arr[i+2]){
            cout<<arr[i]+arr[i+1]+arr[i+2]<<'\n';
            break;
        }
    }
    return 0;
}