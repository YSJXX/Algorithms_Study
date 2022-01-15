#include <iostream>
using namespace std;
int main(){
    int T;cin>>T;
    for(int i=1;i<=T;++i){
        for(int k=1;k<=T-i;++k) cout<<" ";
        for(int j=T-i;j<T;++j){
            cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}