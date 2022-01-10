#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    char str[4];
    cin>>x;
    cin>>str;
    int sum = ((str[2]-48)*x) + ((str[1]-48)*10*x) + ((str[0]-48)*100*x);
    cout<<((str[2]-48)*x)<<'\n';
    cout<<((str[1]-48)*x)<<'\n';
    cout<<((str[0]-48)*x)<<'\n';
    cout<<sum<<'\n';
    return 0;
}