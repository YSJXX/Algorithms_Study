#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    int R=0;
    for(int i=0;i<str.size();++i){
        if(str[i] == 'c'){
            if(str[i+1] == '=' || str[i+1] == '-') ++i;
        } else if(str[i] == 'd'){
            if(str[i+1] == 'z'){
                if(str[i+2] == '=') i+=2;
            } else if(str[i+1] == '-') ++i;
        } else if(str[i] == 'j') {
            if(str[i-1] == 'l' || str[i-1] == 'n') continue;
        } else if(str[i] == '=') {
            if(str[i-1] == 's' || str[i-1] == 'z') continue;
        }
        ++R;
    }
    cout<<R<<'\n';
    return 0;
}