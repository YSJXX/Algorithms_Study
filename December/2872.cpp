#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N=0;
    cin>>N;
    vector<int> arr(N),cp;
    for(auto& i : arr) cin>>i;
    int R=N;
    for(int i=N-1;i>=0;i--)
        if(arr[i]==R) 
            R--;
    cout<<R<<'\n';
    return 0;
}
