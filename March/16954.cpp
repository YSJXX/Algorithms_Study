#include <bits/stdc++.h>
using namespace std;

int dx[9] = {0,0,0,-1,1,-1,-1,1,1}; // 제자리,좌,우,상,하,좌상,우상,좌하,우하
int dy[9] = {0,-1,1,0,0,-1,1,-1,1};  // 제자리,좌,우,상,하,좌상,우상
char board[8][8];
bool vis[8][8] ={false};

bool dfs(int x, int y){
    --x;        // x를 한칸 올림으로써 벽이 내려오는것 구현
    if(board[x][y] == '#') return false;
    if((x == 0 && y == 7) || x < 0) return true;    // 목적지에 도달하거나 x가 음수로 내려가면 벽은 더이상 없기에 통과
    
    bool check = false;
    for(int i=0;i<9;++i){
        int nx = x + dx[i]; // 다음 칸 
        int ny = y + dy[i]; // 다음 칸 
        
        if(nx >= 8 || ny < 0 || ny >= 8) continue; // 범위를 벗어나면 
        if(vis[nx][ny]) continue;               // 방문한 칸이면
        if(board[nx][ny] == '#') continue;      // 벽을 만나면
        vis[nx][ny] = true;
        check = dfs(nx,ny);
        vis[nx][ny] = false;
        if(check) break;
    }
    

    if(check) return true;
    else return false;
}

void solve(){

    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            cin>>board[i][j];
        }
    }

    if(dfs(8,0)) cout<<1<<'\n';
    else cout<<0<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}