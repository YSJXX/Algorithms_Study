#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;cin>>N;
    
    int ans=0;
    vector<int> arr;
    vector<bool> v(N+1, false);

	for (int i = 2; i*i <= N; i++) {
		if (v[i]) continue;
		for (int j = i+i; j <= N; j+=i) {
			v[j] = true;
		}
	}
    // 에라토스테네스 식을 바꾸니 성공
    for(int x=2;x<=N;++x)
        if(!v[x]) arr.push_back(x);

    int st=0,en=0;
    int sum=arr[st];
    int i=0;
    while(st <= en && en < arr.size()){
        if(sum < N) {
            ++en;
            sum += arr[en];
        }
        else if(sum > N) {
            sum -= arr[st];
            ++st;
        }
        else if(st == en && N == arr[st]){ 
            ++ans;
            break;
        }
        else {
            sum -= arr[st];
            ++ans;
            ++st;
        }
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}