#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    int RGB[1001][3];
    int ans;
    RGB[0][0] = 0;
    RGB[0][1] = 0;
    RGB[0][2] = 0;
    for(int i=1;i<=N;++i){
        int R,G,B;
        cin>>R>>G>>B;
        RGB[i][0] = min(RGB[i-1][1],RGB[i-1][2]) + R;
        RGB[i][1] = min(RGB[i-1][0],RGB[i-1][2]) + G;
        RGB[i][2] = min(RGB[i-1][0],RGB[i-1][1]) + B;
    }
    ans = min(RGB[N][0],min(RGB[N][2],RGB[N][1]));
    cout<<ans<<'\n';
    return 0;
}