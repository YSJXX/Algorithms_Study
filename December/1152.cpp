#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string str; getline(cin,str);
    int R=1;
    for(int i=0;i<str.size();++i) R = str[i]==32 ? ++R : R;
    R = str[0] == 32 ? --R : R;
    R = str[str.size()-1] == 32 ? --R : R;
    cout<<R<<'\n';
    return 0;
}