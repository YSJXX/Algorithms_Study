#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;cin>>N;
    int board[N][N];
    
    for(int i=0;i<N;++i){
        string str;
        cin>>str;
        for(int j=0;j<N;++j){
            board[i][j]=str[j]-48;
        }
    }
    
    vector<int> ans;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    vector< vector<int> > vis(N,vector<int>(N,false));
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            if(vis[i][j] == true || board[i][j] != 1) continue;
            int cnt=1;
            queue<pair<int,int> > Q;
            vis[i][j]=true;
            Q.push(make_pair(i,j));        
            while(!Q.empty()){
                pair<int,int> cur = Q.front();
                Q.pop();
                for(int xy=0;xy<4;++xy){
                    int nx = cur.X + dx[xy];
                    int ny = cur.Y + dy[xy];
                    if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                    if(board[nx][ny] != 1 || vis[nx][ny] == true) continue;
                    Q.push(make_pair(nx,ny));
                    vis[nx][ny]=true;
                    ++cnt;
                }
            }
            ans.push_back(cnt);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<'\n';
    for(auto& x:ans) cout<<x<<'\n';
    return 0;
}