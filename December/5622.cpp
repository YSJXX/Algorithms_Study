#include <bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;
    int R=0;
    for(int i=0;i<str.size();++i){
        if(str[i]<=67) R+=3;
        else if(str[i]<=70) R+=4;
        else if(str[i]<=73) R+=5;
        else if(str[i]<=76) R+=6;
        else if(str[i]<=79) R+=7;
        else if(str[i]<=83) R+=8;
        else if(str[i]<=86) R+=9;
        else if(str[i]<=90) R+=10;
    }
    cout<<R<<'\n';
    return 0;
}