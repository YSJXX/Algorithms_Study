#include <bits/stdc++.h>
using namespace std;

int N;
void print(vector<vector<int> > D){
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(0x3f3f3f3f == D[i][j]) cout<<"0"<<" ";
            else cout<<D[i][j]<<" ";
        }
        cout<<'\n';
    }
}

void solve(){
    cin>>N;
    int M;cin>>M;

    vector<vector<int> > D(N+1,vector<int>(N+1,0x3f3f3f3f));
    while(M--){
        int a,b,c;cin>>a>>b>>c;
        D[a][b] = min(D[a][b],c);
    }
    for(int i=1;i<=N;++i) D[i][i] = 0;
    for(int k=1;k<=N;++k){
        for(int i=1;i<=N;++i){
            for(int j=1;j<=N;++j){
                int  x,y,z,sum;
                x = D[i][j];
                y = D[k][j];
                z = D[i][k];
                sum = D[k][j]+D[i][k];
                D[i][j] = min(D[i][j],sum);
            }
        }
    }
    print(D);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}