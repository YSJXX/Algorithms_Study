#include <bits/stdc++.h>
using namespace std;

int N;
int A[100];
int arr[4];
long long maxx=-1000000001,minn=1000000001;
void T(int val,int num){
    if(val == N-1){
        if(maxx<num) maxx = num;
        if(minn>num) minn = num;        
        return;
    }
    for(int i=0;i<4;++i){
        if(arr[i] != 0) {
            --arr[i];
            if(i==0) T(val+1,num+A[val+1]);
            else if(i==1) T(val+1,num-A[val+1]);
            else if(i==2) T(val+1,num*A[val+1]);
            else T(val+1,num/A[val+1]);
            ++arr[i];
        }
    }
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin>>N;
    for(int i=0;i<N;++i) cin>>A[i];
    for(int i=0;i<4;++i) cin>>arr[i];
    T(0,A[0]);
    cout<<maxx<<'\n';
    cout<<minn<<'\n';
    return 0;
}