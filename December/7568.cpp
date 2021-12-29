#include <bits/stdc++.h>
using namespace std;
typedef struct _phy{
    int x;
    int y;
    int rank;
}Phy;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int N;cin>>N;
    Phy phy[N];
    for(int i=0;i<N;++i){
        cin>>phy[i].x>>phy[i].y;
        phy[i].rank = 1;
    }
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            if(phy[i].x < phy[j].x && phy[i].y < phy[j].y) 
                ++phy[i].rank;
        }
        cout<<phy[i].rank<<" ";
    }
    cout<<'\n';
    return 0;
}