#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
// queue를 익은 토마토 갯수대로 만들어 사용
int cn;
void print(vector<vector<bool> > vis,int N,int M){
    for(int n=0;n<N;++n){
        for(int m=0;m<M;++m){
            cout<<vis[n][m]<<" ";
        }
        cout<<'\n';
    }
    cout<<"______________________\n";
}
int solv(vector<vector<int> > board,queue<pair<int,int> >Q,vector<vector<bool> > vis,int N,int M){
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    int date=-1;
    
    while(!Q.empty()){
        ++date;
        int sz = Q.size();
        while(sz--){
            pair<int,int> cur = Q.front();
            Q.pop();
            --cn;
            for(int udlr=0;udlr<4;++udlr){
                int nx = cur.X + dx[udlr];
                int ny = cur.Y + dy[udlr];
                if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                if(board[nx][ny]==-1 || vis[nx][ny]) continue;
                vis[nx][ny]=true;
                Q.push(make_pair(nx,ny));
            }
        }
        
    }
    return cn == 0? date : -1;
    // int sz = q[i].size();
    // while(sz--){}
    // for(int n=0;n<N;++n){
    //     for(int m=0;m<M;++m){
    //         cout<<board[n][m]<<" ";
    //     }
    //     cout<<'\n';
    // }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int M,N;cin>>M>>N;
    cn = N*M;
    vector<vector<int> > board(N,vector<int>(M,0));
    queue<pair<int,int> > Q;    // 익은 토마토부터 시작하기 위해 큐 배열 생성
    vector<vector<bool> > vis(N,vector<bool>(M,false));

    for(int n=0;n<N;++n){
        for(int m=0;m<M;++m){
            cin>>board[n][m];
            if(board[n][m] == 1){
                Q.push(make_pair(n,m));
                vis[n][m] = true;
            }else if(board[n][m] == -1){
                --cn;
            }
        }
    }
    cout<<solv(board,Q,vis,N,M)<<'\n';
    // for(int i=0;i<Q.size();++i){
    //     cout<<Q[i].front().X<<","<<Q[i].front().Y<<'\n';
    //     Q[i].pop();
    //     Q.erase(Q.begin()+i);
    //     cout<<Q.size()<<'\n';
    // }
    
    return 0;
}