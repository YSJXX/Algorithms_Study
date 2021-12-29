#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B;cin>>A>>B;
    char arr[A][B];
    for(int a=0;a<A;++a)
        cin>>arr[a];


    int min=100;
    for(int a=0;a<A-7;++a){
        for(int b=0;b<B-7;++b){
            int cnt=0;
            int cntB = 0;
            int cntW = 0;
            for(int x=a;x<a+8;++x){
                for(int y=b;y<b+8;++y){
                    if((x+y)%2==0){
                        if(arr[x][y] == 'B') 
                            ++cntW;
                        else
                            ++cntB;
                    }
                    else{
                        if(arr[x][y] == 'B')
                            ++cntB;
                        else
                            ++cntW;
                    }
                }
            }
            min = min < cntB ? min:cntB;
            min = min < cntW ? min:cntW;
        }
    }
    cout<<min<<'\n';
    return 0;
}