#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;cin>>str1>>str2;
    string t1=str1,t2=str2;
    int x=2;
    for(int i=0;i<3;++i) t1[i] = str1[x--];
    x=2;
    for(int i=0;i<3;++i) t2[i] = str2[x--];
    int a=stoi(t1);
    int b=stoi(t2);
    printf("%d\n",a>b?a:b);
    return 0;
}