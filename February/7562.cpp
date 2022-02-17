#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

void solve(){
    int T;cin>>T;
    for(int tcase=0;tcase<T;++tcase){
        int I;cin>>I;
        pair<int,int> src,dest;
        cin>>src.X>>src.Y;
        cin>>dest.X>>dest.Y;
        vector<vector<int> > board(I,vector<int>(I,0));
        queue<pair<int,int> > Q;
        int dx[8] = {-1,-2,-2,-1,1,2,2,1};
        int dy[8] = {-2,-1,1,2,2,1,-1,-2};
        Q.push(src);        // 시작 위치 입력
        if(src == dest) cout<<"0\n";
        else{
            while(!Q.empty()){
                pair<int,int> cur = Q.front();
                Q.pop();
                for(int lo=0;lo<8;++lo){
                    int nx = cur.X + dx[lo];
                    int ny = cur.Y + dy[lo];
                    if(nx < 0 || nx >= I  || ny < 0 || ny >= I) continue;
                    if(board[nx][ny] > 0) continue;
                    Q.push(make_pair(nx,ny));
                    board[nx][ny] = board[cur.X][cur.Y] + 1;
                }
                if(board[dest.X][dest.Y] !=0 ) {
                    cout<<board[dest.X][dest.Y]<<'\n';
                    break;
                }
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}