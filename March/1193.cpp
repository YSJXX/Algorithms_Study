#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin >> N;

	int i = 1;
	while (N > i) {
		N -= i;
		i++;
	}
	if (i % 2 == 1)cout << i + 1 - N << '/' << N << endl;
	else cout << N << '/' << i + 1 - N << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}