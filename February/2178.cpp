#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int solv(vector<vector<int> > board,int N,int M){
    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < M; j++) {
    //         cout << board[i][j] << " ";
    //     }
    //     cout <<'\n';
    // }
    vector<vector<int> > dist(N,vector<int>(M,0));
    vector<vector<bool> > vis(N,vector<bool>(M,false));
    int dx[4] = {-1,1,0,0}; // 상하좌우 탐색
    int dy[4] = {0,0,-1,1};
    queue<pair<int,int> > Q;
    Q.push(make_pair(0,0));
    dist[0][0]=1;
    vis[0][0]=true;
    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int udlr=0;udlr<4;++udlr){ //상하좌우 탐색
            int nx = cur.X + dx[udlr];
            int ny = cur.Y + dy[udlr];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(board[nx][ny] == 0 || vis[nx][ny]) continue;
            Q.push(make_pair(nx,ny));
            vis[nx][ny] = true;
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
        }
    }
    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < M; j++) {
    //         cout << dist[i][j] << " ";
    //     }
    //     cout <<'\n';
    // }
    return dist[N-1][M-1];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M;cin>>N>>M;
    vector<vector<int> > board(N,vector<int>(M));
    for(int n=0;n<N;++n){
        string x;cin>>x;
        for(int m=0;m<M;++m){
            board[n][m] = x[m]-48;
        }
    }
    cout<<solv(board,N,M)<<'\n';
    return 0;
}