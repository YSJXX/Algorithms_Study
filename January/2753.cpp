#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    cout<<((N%4==0 && (N%100!=0 || N%400==0)) ? "1" : "0")<<'\n';
    return 0;
}