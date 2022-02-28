#include <bits/stdc++.h>
using namespace std;
typedef tuple<int,int,int> tiii;

void solve(){
    int M,N;cin>>M>>N;
    vector<vector<int>> board(N+1,vector<int>(M+1));        // 미로
    vector<vector<int>> d(N+1,vector<int>(M+1,0));      // 최단 경로
    vector<vector<bool>> vis(N+1,vector<bool>(M+1,false));      // 방문
    priority_queue<tiii, vector<tiii>, greater<tiii>> pq;
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};


    for(int i=1;i<=N;++i){
        char str[M+1];
        cin>>str;
        for(int j=1;j<=M;++j){
            board[i][j] = str[j-1]-48;
        }
    }
    vis[1][1]=true;
    d[1][1]=0;
    pq.push({d[1][1],1,1});
    while(!pq.empty()){
        tiii cur = pq.top();
        int cnt = get<0>(cur);
        int X = get<1>(cur);
        int Y = get<2>(cur);
        pq.pop();
        if(d[X][Y] != cnt) continue;
        for(int xy=0;xy<4;++xy){
            int nx = X + dx[xy];
            int ny = Y + dy[xy];
            if(nx <= 0 || ny <= 0 || nx > N || ny > M) continue;
            if(vis[nx][ny]) continue;
            if(board[nx][ny] == 1) d[nx][ny] = board[nx][ny] + cnt;
            else d[nx][ny] = d[X][Y];
            vis[nx][ny]=true;
            pq.push({d[nx][ny],nx,ny});
        }
    }
    cout<<d[N][M]<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}

//10:28 ~ 14:54