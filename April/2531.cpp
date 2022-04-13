#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,D,K,C;    // N: 접시 수, D: 초밥 가짓수, K: 연속 먹는 접시, C: 쿠폰번호
    cin>>N>>D>>K>>C;    
    
    vector<int> arr(N*2+1);     // 접시 담을 배열, 
    vector<int> food(D+1,0);    // 먹은 음식

    int kind = 1;          // 먹은 종류, 쿠폰은 먼저 먹은것으로 간주
    int ans = 1;           // ans = kind
    food[C] = 1;           // 쿠폰 음식은 먹음

    for(int i=0;i<N;++i){
        cin>>arr[i];        // 접시 세팅
        arr[i+N] = arr[i];
    }

    for(int i=0;i<N*2;++i){
        if(i >= K){                 // 접시 종류 카운팅 후 K만큼 지나면 앞에서부터 하나씩 제거
            int sushi = arr[i-K];
            --food[sushi];
            if(food[sushi] == 0) --kind;
        }
        
        int sushi = arr[i];
        if(food[sushi] == 0){
            ++kind;
            ans = max(ans,kind);
        }
        ++food[sushi];
    }
    
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}