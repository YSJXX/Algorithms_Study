#include <bits/stdc++.h>
using namespace std;

void solve(){
    int v[5];
    for (int i = 0; i < 5; i++) cin >> v[i];

    int num = 1;
    while (1){
        int cnt = 0; // 몇개로 나눠지는지 
        for (int i = 0; i < 5; i++) 
            if (num >= v[i] && num % v[i] == 0) cnt++;
        // 적어도 대부분의 배수 찾은경우 
        if (cnt >= 3){
            cout << num << '\n';
            break;
        }
        // 아니면 숫자+1 
        num++;	
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}