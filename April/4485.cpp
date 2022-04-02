#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1,1,0,0}; //상하좌우
int dy[4] = {0,0,-1,1};
void solve(){
    int i=0;
    while(true){
        int N;cin>>N;
        if(N==0) break;
        vector<vector<int>> board(N,vector<int>(N));
        vector<vector<int>> d(N,vector<int>(N,0x7FFFFFFF));
        for(int i=0;i<N;++i){
            for(int j=0;j<N;++j){
                cin>>board[i][j];
            }
        }

        // money , x,y
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;

        d[0][0] = board[0][0];
        pq.push({d[0][0],0,0}); // money , x, y
        while(!pq.empty()){
            auto money = get<0>(pq.top());
            auto X = get<1>(pq.top());
            auto Y = get<2>(pq.top());
            pq.pop();
            if(d[X][Y] != money) continue;

            for(int i=0;i<4;++i){
                int nx = X + dx[i];
                int ny = Y + dy[i];
                if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                if(d[nx][ny] <= d[X][Y] + board[nx][ny]) continue;
                d[nx][ny] = d[X][Y] + board[nx][ny];
                pq.push({d[nx][ny],nx,ny});
            }
        }
        cout<<"Problem "<<++i<<": "<<d[N-1][N-1]<<'\n';
    }


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}

// 04:27 ~ 05:19