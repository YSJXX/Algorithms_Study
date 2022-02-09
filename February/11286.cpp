#include <bits/stdc++.h>
using namespace std;

struct Val {
    int x;
};
 
struct cmp {
    bool operator()(Val a, Val b) {
        if(abs(a.x) == abs(b.x)) return a.x > b.x;
        return abs(a.x) > abs(b.x);
    }
};
priority_queue< Val,vector<Val>, cmp >pq;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;cin>>N;
    Val input;
    for(int i=0;i<N;++i){
        cin>>input.x;
        if(input.x == 0 ) {
            if(pq.size() == 0) printf("0\n");
            else{
                printf("%d\n",pq.top().x);
                pq.pop();
            }
        }else
        pq.push(input);
    }
    return 0;
}