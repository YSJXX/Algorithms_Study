#include <bits/stdc++.h>
using namespace std;
int cn;
void print(vector<vector<vector<bool> > > vis,int H,int N,int M){
    cout<<"______________________\n";
    for(int h=0;h<H;++h){
        for(int n=0;n<N;++n){
            for(int m=0;m<M;++m){
                cout<<vis[h][n][m]<<" ";
            }
            cout<<'\n';
        }
        cout<<'\n';
    }    
}
int solv(vector<vector<vector<int> > > board,queue<tuple<int,int,int> >Q,vector<vector<vector<bool> > > vis,int H,int N,int M){
    int dh[6] = {0,0,0,0,-1,1};  //상하좌우위아래
    int dx[6] = {-1,1,0,0,0,0}; 
    int dy[6] = {0,0,-1,1,0,0};
    int date=-1;
    
    while(!Q.empty()){
        ++date;
        int sz = Q.size();
        while(sz--){
            tuple<int,int,int> cur = Q.front();
            Q.pop();
            --cn;
            for(int udlr=0;udlr<6;++udlr){
                int nh = get<0>(cur) + dh[udlr];
                int nx = get<1>(cur) + dx[udlr];
                int ny = get<2>(cur) + dy[udlr];
                if(nh < 0 || nh >= H || nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                if(board[nh][nx][ny]==-1 || vis[nh][nx][ny]) continue;
                vis[nh][nx][ny]=true;
                Q.push(make_tuple(nh,nx,ny));
            }
        }
        
    }
    return cn == 0? date : -1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int M,N,H;cin>>M>>N>>H;
    cn = N*M*H;
    vector<vector<vector<int> > > board(H,vector<vector<int> >(N,vector<int>(M,0)));
    queue<tuple<int,int,int> > Q;    // 익은 토마토부터 시작하기 위해 큐 배열 생성
    vector<vector<vector<bool> > > vis(H,vector<vector<bool> >(N,vector<bool>(M,false)));
    for(int h=0;h<H;++h){
        for(int n=0;n<N;++n){
            for(int m=0;m<M;++m){
                cin>>board[h][n][m];
                if(board[h][n][m] == 1){
                    Q.push(make_tuple(h,n,m));
                    vis[h][n][m] = true;
                }else if(board[h][n][m] == -1){
                    --cn;
                }
            }
        }    
    }
    cout<<solv(board,Q,vis,H,N,M)<<'\n';    
    return 0;
}