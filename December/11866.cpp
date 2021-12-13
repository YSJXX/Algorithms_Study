#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,K;cin>>N>>K;
    queue<int> q;
    vector<int> arr;
    for(int i=0;i<N;i++) q.push(i+1);
    int i=0;
    while(!q.empty()){
        if(++i%K == 0) arr.push_back(q.front());
        else q.push(q.front());
        q.pop();
    }
    cout<<"<"<<arr[0];
    for(int x=1;x<N;++x) cout<<", "<<arr[x];
    cout<<">\n";
    return 0;
}