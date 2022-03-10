#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
void solve(){
    int N,K,L;
    cin>>N>>K;
    vector<vector<int>> board(N+1,vector<int>(N+1));
    int z=0;
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            board[i][j] = ++z;      // board에 고유 값을 부여 (몸통의 정보를 찾기 위해)
        }
    }
    int dx[4] = {-1,0,1,0}; // 상우하좌
    int dy[4] = {0,1,0,-1};
    vector<vector<bool>> app(N+1,vector<bool>(N+1,false));
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;    // 최소힙을 만들어 방향 명령 힙
    deque<pair<int,int>> DQ;    // 몸통 길이 deque
    vector<bool> body((N+1)*(N+1),false);   // 몸통의 고유 번호를 담을 배열

    for(int i=0;i<K;++i){
        int x,y;cin>>x>>y;  // 사과 입력
        app[x][y] = true; // true은 사과
    }
    
    cin>>L;     // 방향 명령

    for(int i=0;i<L;++i){
        int x;
        char y;
        cin>>x>>y;
        pq.push({x,y});
    }

    DQ.push_back({1,1});        // 시작 위치 입력
    body[ board[1][1] ] = true; //시작 위치 true
    int sec = 1;                // 시간초
    int move = 1;               //dx,dy 3번째 idx는 오른쪽 이동
    while(true){
        pair<int,int> cur = DQ.front();     // 머리 위치
        int CurBoardVal = board[cur.X][cur.Y];  // board에 있는 고유 번호
        
        if(sec-1 == pq.top().X){  //방향 전환 if , 시간초 비교
            if(pq.top().Y == 'D') move = (move+1)%4;    // 해당 값을 계산하면 진행 방향 기준 오른쪽으로 전환
            else move = (move+3)%4;                     // 해당 값을 계산하면 진행 방향 기준 왼쪽으로 전환
            pq.pop();
        }
        sec++;

        pair<int,int> nxt = cur;
        nxt.X = cur.X + dx[move];
        nxt.Y = cur.Y + dy[move];
        if(nxt.X <= 0 || nxt.X > N || nxt.Y <= 0 || nxt.Y > N) break;
        
        int NxtBoardVal = board[nxt.X][nxt.Y];      // 다음 board에 있는 고유 번호
        if(body[NxtBoardVal]) break;      // 다음 위치가 몸통이면 break
        
        DQ.push_front({nxt.X,nxt.Y});
        body[NxtBoardVal] = true;         // board의 고유 값을 몸통 고유번호 배열에 true
        if(app[nxt.X][nxt.Y]) {             // 사과륿 발견하면
            app[nxt.X][nxt.Y] = false;
            continue;
        }      
        
        body[board[DQ.back().X][DQ.back().Y]] = false;        // 사과가 아니면 몸통 고유번호 배열에 false
        DQ.pop_back();                      //사과가 아니면 꼬리를 늘이지 않는다. 꼬리 부분 pop
    }
    cout<<sec-1<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}