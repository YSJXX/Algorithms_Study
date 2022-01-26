#include <stdio.h>
#include <algorithm>

typedef struct _Room{
    int x;
    int y;
}Room;

int cmp(Room a, Room b){
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}
int main(){
    int N;scanf("%d",&N);
    Room room[100001];
    int ans=0,maxv=0;
    int t=0;

    for(int i=0;i<N;++i) scanf("%d %d",&room[i].y, &room[i].x);

    std::sort(room,room+N,cmp);
    for(int i=0;i<N;++i){
        if(t <= room[i].y){
            t=room[i].x;
            ++ans;
        }
    }
    printf("%d\n",ans);
    return 0;
}
