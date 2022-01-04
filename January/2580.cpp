#include <bits/stdc++.h>
using namespace std;

typedef struct _XY{
    int x;
    int y;
}XY;

int arr[9][9];
int sz=0;
XY xy[81];

vector<int> check(int x,int y){ // y는 필요 없음
    bool row_ck[10]={false,};
    bool column_ck[10]={false,};
    bool square_ck[10]={false,};
    vector<int> row_val;
    vector<int> column_val;
    vector<int> square_val;
    //row check
    for(int i=0;i<9;++i)
        if(arr[x][i] != 0) row_ck[arr[x][i]]=true;
    for(int i=1;i<10;++i)
        if(!row_ck[i]) row_val.push_back(i);
    //column check
    if(row_val.size() == 1) return row_val;
    else{
        for(int i=0;i<9;++i)
            if(arr[i][y] != 0) column_ck[arr[i][y]]=true;
        for(int i=1;i<10;++i)
            if(!column_ck[i]) column_val.push_back(i);
    }
    // square check
    if(column_val.size() == 1) return column_val;
    else{
        int tx,ty;
        if(x < 3) tx=0;
        else if(x < 6) tx=3;
        else tx=6;

        if(y < 3) ty=0;
        else if(y < 6) ty=3;
        else ty=6;

        for(int i=0;i<3;++i){
            for(int j=0;j<3;++j){
                if(arr[tx][ty] != 0) square_ck[arr[tx][ty]]=true;
            }
        }
        for(int i=1;i<10;++i)
            if(!square_ck[i]) square_val.push_back(i);
    }
    return square_val<row_val ? square_val:row_val;
    
}

bool T(int n){
    if(n == sz) {
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                cout<<arr[i][j]<<" ";
            }
            cout<<'\n';
        }
        return true;
    }
    int x = xy[n].x;
    int y = xy[n].y;
    vector<int> lst(check(x,y));
    for(int k=0;k<lst.size();++k){
        arr[x][y]=lst[k];
        for(int i=n;i<sz;++i){
            if(T(i+1)) return true;
        }
    }
    return false;
}
int main(){
    for(int i=0;i<9;++i){
        for(int j=0;j<9;++j){
            cin>>arr[i][j];
            if(arr[i][j]==0) {
                xy[sz].x = i;
                xy[sz++].y = j;
            }
        }
    }
    T(0);
    return 0;
}

// 1. (0,0) 부터 오름차순 순으로 빈칸을 찾는다.
// 2. 빈칸에서 가로 세로 사각형을 확인하여 입력 가능한 값을 찾는다. ( ex. 1,6) 
//      - 빈칸이 한개면 곧바로 값을 채움 
//          - 값을 채운 빈칸이랑 연관있는 빈칸을 또 찾는다.
//      - 가로 확인하여 빈칸이 하나면 세로,사각형은 확인하지 않아도 된다.
//      - 빈칸의 개수가 낮을수록 우선 순위, 같다면  가로,세로,사각 순으로 우선순위
// 3. 빈칸이 2개 이상이면 가능 값(ex. 1,6) 으로 백트래킹 시도. 
//      - 

// 빈칸에 연관된 빈칸도 dfs로 팀색
// 탐색이 끝나면 또다른 빈칸ㅇ을 찾고 반복


// 빈칸 찾고 대입 간능한 값 찾고 그 값으로 dfs


// 0 3 5 4 6 9 2 7 8
// 7 8 2 1 0 5 6 0 9
// 0 6 0 2 7 8 1 3 5
// 3 2 1 0 4 6 8 9 7
// 8 0 4 9 1 3 5 0 6
// 5 9 6 8 2 0 4 1 3
// 9 1 7 6 5 2 0 8 0
// 6 0 3 7 0 1 9 5 2
// 2 5 8 3 9 4 7 6 0