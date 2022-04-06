#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d;
 
	cin >> a >> b >> c >> d;
 
	cout << (a + b + c + d) / 60 << endl;
	cout << (a + b + c + d) % 60 << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}