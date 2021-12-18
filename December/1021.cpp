#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;scanf("%d",&N);
    int M;scanf("%d",&M);
    int arr[51];
    for(int i=0;i<M;++i) scanf("%d",&arr[i]);
    deque<int> deq;
    for(int i=1;i<=N;++i) deq.push_back(i);
    int x=0;
    int cnt=0;
    int idx=0;
    while(!(x==M)){
        for(int i=0;i<N;++i) {
            if(arr[x] == deq[i]){
                idx = i;
                break;
            }
        }
        while(true){
            if(deq.front() == arr[x]){
                deq.pop_front();
                break;
            }
            else{
                if(idx < deq.size() - idx){
                    deq.push_back(deq.front());
                    deq.pop_front();
                }
                else{
                    deq.push_front(deq.back());
                    deq.pop_back();
                }
            }
            ++cnt;
        }
        ++x;
    }
    printf("%d\n",cnt);
    return 0;
}