#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;scanf("%d",&N);
    int arr[301]={0};
    int sum[301]={0};
    for(int i=1;i<=N;++i)
        scanf("%d",&arr[i]);
    sum[1] = arr[1];
    sum[2] = arr[1] + arr[2];
    sum[3] = max(arr[1],arr[2]) + arr[3];

    for(int i=4;i<=N;++i){
        sum[i] = max(sum[i-2],arr[i-1]+sum[i-3]) + arr[i];
    }
    cout<<sum[N]<<'\n';
    return 0;
}


// 5
// 50
// 40
// 30
// 20
// 10

// 6
// 123
// 14
// 3
// 2
// 13
// 4

// 6
// 10
// 3
// 2
// 1
// 100
// 100