#include <bits/stdc++.h>
using namespace std;
int main(){
    int H,M;cin>>H>>M;
    int t = M-45;
    if(t<0) cout<<(H==0?23:H-1)<<" "<<60+t<<'\n';
    else cout<<H<<" "<<t<<'\n';
    return 0;
}