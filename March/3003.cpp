#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a[6] = { 1, 1, 2, 2, 2, 8 };
	int b[6];
 
	for (int i = 0; i < 6; ++i) {
		cin>>b[i];
		cout<<(b[i] - a[i]) * -1 << " ";
	}
	cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}