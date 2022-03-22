#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<long long> arr(100001);
vector<long long> MAX(100000*4,-1);
vector<long long> MIN(100000*4,0x7fffffff);

//a,b = 시작, 끝 범위 node = 현재 노드 st,end  = 탐색 할 범위
int MAXupdate(int i,int val,int node,int st,int end){
    if(i > end || i < st) return MAX[node];    // 범위에 i가 없을 경우
    if(st == end) return MAX[node] = val;       // leaf에 도달 할 경우
    int mid = (st+end)/2;
    return MAX[node] = max(MAXupdate(i,val,node*2,st,mid),MAXupdate(i,val,node*2+1,mid+1,end));
}

int MINupdate(int i,int val,int node,int st,int end){
    if(i > end || i < st) return MIN[node];    // 범위에 i가 없을 경우
    if(st == end) return MIN[node] = val;       // leaf에 도달 할 경우
    int mid = (st+end)/2;
    return MIN[node] = min(MINupdate(i,val,node*2,st,mid),MINupdate(i,val,node*2+1,mid+1,end));
}

int MAXquery(int a,int b,int node,int st,int end){
    if(a > end || st > b) return -1;        // 탐색 범위에서 벗어나면 -1;
    if(a <= st && end <= b) return MAX[node];
    int mid = (st+end)/2;
    return max(MAXquery(a,b,node*2,st,mid),MAXquery(a,b,node*2+1,mid+1,end));
}

int MINquery(int a,int b,int node,int st,int end){
    if(a > end || st > b) return 0x7fffffff;        // 탐색 범위에서 벗어나면 -1;
    if(a <= st && end <= b) return MIN[node];
    int mid = (st+end)/2;
    return min(MINquery(a,b,node*2,st,mid),MINquery(a,b,node*2+1,mid+1,end));
}

void solve(){
    cin>>N>>M;

    for(int i=1;i<=N;++i) {
        cin>>arr[i];
        MAXupdate(i,arr[i],1,1,N);
        MINupdate(i,arr[i],1,1,N);
    }
    
    for(int i=0;i<M;++i){
        int a,b;cin>>a>>b;
        cout<<MINquery(a,b,1,1,N)<<" "<<MAXquery(a,b,1,1,N)<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}