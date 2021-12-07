#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    long long R=0;
    cin>>N;
    vector<int> arr(N);
    for(auto& i : arr) cin>>i;
    sort(arr.begin(),arr.end());
    // for(int i=0;i<N;i++) R += i+1 < arr[i] ? arr[i]-(i+1) : (i+1)-arr[i];
    for(int i=0;i<N;i++) R += abs(arr[i]-(i+1));
    cout<<R<<'\n';
    return 0;
}