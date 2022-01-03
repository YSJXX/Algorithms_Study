#include <bits/stdc++.h>
using namespace std;

int N;
int arr[16];
int ans=0;

int check(int row){
    for(int i=1;i<row;++i){
        if((arr[i] == arr[row]) || (row-i == abs(arr[row] - arr[i])))
            return 0;
    }
    return 1;
}
void T(int row){
    if(row == N+1){
        ++ans;
        return;
    }else{
        for(int i=1;i<=N;++i){
            arr[row]=i;
            if(check(row))
                T(row+1);
        }
    }
}

int main(){
    cin>>N;
    T(1);
    cout<<ans<<'\n';
    return 0;
}