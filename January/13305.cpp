#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(0x0); std::cin.tie(0x0);
    int N;std::cin>>N;
    int dist[N];
    long long minv=1000000001;
    int money=0;
    long long ans=0;
    for(int i=0;i<N-1;++i) std::cin>>dist[i];

    for(int i=0;i<N-1;++i){
        std::cin>>money;
        minv = minv < money ? minv : money;
        ans += minv * dist[i];
    }
    printf("%lld\n",ans);
    return 0;
}

// #include <stdio.h>
// typedef struct _station{
//     long long dist;
//     long long money;
// }Station;

// int main(){
//     int N;scanf("%d",&N);
//     Station sta[N];

//     long long ChargeDist = 0;
//     long long minv=1000000001;
//     long long next_sta=0;
//     long long ans=0;

//     for(long long i=0;i<N-1;++i) {
//         scanf("%lld",&sta[i].dist);
//     }
//     for(long long i=0;i<N;++i) {
//         scanf("%lld",&sta[i].money);
//         minv = minv < sta[i].money ? minv : sta[i].money;
//     }
       
//     for(long long i=next_sta+1;i<N;++i){
//         ChargeDist = 0;
//         if(sta[next_sta].money > sta[i].money) {
//             for(long long j=next_sta;j<i;++j) ChargeDist += sta[j].dist;
//             ans += (ChargeDist * sta[next_sta].money);
//             next_sta = i;
//         }else if( i == N-1 ){
//             for(long long j=next_sta;j<i;++j) ChargeDist += sta[j].dist;
//             ans += (ChargeDist * sta[next_sta].money);
//         }
//     }
    
//     printf("%lld\n",ans);
//     return 0;
// }
