#include <bits/stdc++.h>
using namespace std;

int N;
int arr[20][20];
int minn=1000000;
vector<bool> ck(401,true);

void T(int val,int pos){
    if(N/2 == val) {
        int num1=0,num2=0;
        for(int x=0;x<N;++x){
            for(int y=0;y<N;++y){
                if(ck[x] && ck[y]){
                    num1 += arr[x][y];
                }
                if(!ck[x] && !ck[y]){
                    num2 += arr[x][y];
                }
            }
        }
        minn = minn < abs(num1-num2) ? minn : abs(num1-num2);
        return;
    }

    for(int i=pos;i<N;++i){
        if(ck[i]){
            ck[i]=false;
            cout<<"val: "<<val<<"|| pos: "<<pos<<'\n';
            T(val+1,i+1);
            ck[i]=true;
        }
    }
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin>>N;
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            cin>>arr[i][j];
        }
    }
    T(0,0);
    cout<<minn<<'\n';
    return 0;
}