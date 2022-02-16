#include <bits/stdc++.h>
using namespace std;
// #define A1 frist     // key가 없이 방문한 기록이 있으면 true 아니면 false
// #define B1 second    // key를 가지고 방문한 적이 있으면 true 없으면 false

int N,M;

int solve(){
    vector<vector<int> > board(N,vector<int>(M,0));
    vector<vector<int> > dict(N,vector<int>(M,0));
    vector<vector<pair<bool,bool> > > vis(N,vector<pair<bool,bool> >(M));

    queue<tuple<int,int,bool> > Q;
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};

    string st;
    for(int n=0;n<N;++n){
        cin>>st;
        for(int m=0;m<M;++m){
            board[n][m] = st[m]-48;
        }
    }    
    Q.push(make_tuple(0,0,true));
    dict[0][0]=1;
    vis[0][0] = make_pair(true,true);
    while(!Q.empty()){
        tuple<int,int,bool> cur = Q.front();
        Q.pop();
        for(int xy=0;xy<4;++xy){
            int nx = get<0>(cur) + dx[xy];
            int ny = get<1>(cur) + dy[xy];
            int key = get<2>(cur);
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(key && vis[nx][ny].second) continue;    //key를 가지고있고, 방문기록이 있으면
            if(!key && vis[nx][ny].first) continue;           //key없이 방문 기록이 있으면
            if(board[nx][ny] == 1) {
                if(key) Q.push(make_tuple(nx,ny,false));
                else continue;
            }
            else Q.push(make_tuple(nx,ny,key));

            if(key) {
                vis[nx][ny].second=true;
                dict[nx][ny]=dict[get<0>(cur)][get<1>(cur)] + 1;
            }
            else {
                vis[nx][ny].first=true;
                if(dict[nx][ny]!=0)
                    dict[nx][ny]= dict[get<0>(cur)][get<1>(cur)] + 1 > dict[nx][ny] ? dict[nx][ny] : dict[get<0>(cur)][get<1>(cur)] + 1;
                else 
                    dict[nx][ny]=dict[get<0>(cur)][get<1>(cur)] + 1;
            }
            if(dict[N-1][M-1]!=0) return dict[N-1][M-1];
        }
    }
    return dict[N-1][M-1] == 0 ? -1 : dict[N-1][M-1];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M;
    cout<<solve()<<'\n';
    return 0;
}