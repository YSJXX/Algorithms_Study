#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int BFS(vector<vector<int> > board,int M,int N){
    int dx[4] = {0,1,0,-1};  // 오른쪽,아래,왼쪽,위 순서 
    int dy[4] = {1,0,-1,0};
    int ans=0;
    vector< vector<bool> > vis(M,vector<bool>(N,false));
    for(int i=0;i<M;++i){
        for(int j=0;j<N;++j){
            
            if(board[i][j] == 0 || vis[i][j]) continue;
            ++ans;
            queue<pair<int,int> > Q;
            Q.push(make_pair(i,j));
            vis[i][j]=true;
            while(!Q.empty()){
                pair<int,int> cur = Q.front();
                Q.pop();
                for(int udlr=0;udlr<4;++udlr){ //상하좌우 탐색
                    int nx = cur.X + dx[udlr];
                    int ny = cur.Y + dy[udlr];
                    if(nx < 0 || nx >= M | ny < 0 || ny >= N) continue;
                    if(board[nx][ny] == 0 || vis[nx][ny]) continue;
                    Q.push(make_pair(nx,ny));
                    vis[nx][ny]=true;
                }
            }
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    for(int t=0;t<T;++t){
        int M,N,K;cin>>M>>N>>K;
        vector<vector<int> > board(M,vector<int>(N));
        for(int k=0;k<K;++k){
            int x,y;cin>>x>>y;
            board[x][y] = 1;
        }
        cout<<BFS(board,M,N)<<'\n';
    }
    return 0;
}