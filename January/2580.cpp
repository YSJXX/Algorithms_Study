#include <bits/stdc++.h>
using namespace std;

typedef struct _XY{
    int x;
    int y;
}XY;

int arr[9][9];
int sz=0;
XY xy[82];

bool check2(int x,int y,int k){
    //row check ,column check
    for(int i=0;i<9;++i){
        if(arr[x][i]==k) return false;
        if(arr[i][y]==k) return false;
    }
    
    // square check
    x = x/3;
    y = y/3;
    for(int i=x*3;i<x*3+3;++i){
        for(int j=y*3;j<y*3+3;++j){
            if(arr[i][j]== k ) return false;
        }
    }
    return true;
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

    for(int k=1;k<10;++k){
        if(check2(x,y,k)){
            arr[x][y]=k;
            if(T(n+1)) return true;
        }
    }
    arr[x][y]=0;
    return false;
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    for(int i=0;i<9;++i){
        for(int j=0;j<9;++j){
            cin>>arr[i][j];
            if(arr[i][j]==0) {
                xy[sz].x = i;
                xy[sz].y = j;
                ++sz;
            }
        }
    }
    T(0);
    return 0;
}