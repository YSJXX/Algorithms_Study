#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int X,Y,cnt=0;cin>>X>>Y;
        queue<pair<int, int> > q;
        priority_queue<int> pq;
        for(int i=0;i<X;++i) {
            int A;
            cin>>A;
            q.push({i,A});
            pq.push(A);
        }
        while(!q.empty()){// 4 3 2 1
            int idx = q.front().first;
            int val = q.front().second;
            if(pq.top() == val){
                ++cnt;
                pq.pop();
                if(idx == Y) {
                    cout<<cnt<<'\n';
                    break;
                }
            } else q.push(q.front());
            q.pop();
        }
    }
    return 0;
}
// 우선순위 queue를 vector에 넣고 sort로 내림차순 정렬하면 vector에는 출력 순서가 나열
// 궁금한 문서의 Y를 queue에서 뽑고 그 값이 vector의 몇번째 인덱스에 위치하는지 찾기
// 위 방법은 실패 

// vector에 내림차순으로 정렬하고 queue에서 vector값중 가장 큰 값부터 출력