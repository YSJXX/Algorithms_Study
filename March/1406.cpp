#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    int N;
    cin>>str;                       // 문자열 입력
    list<char> lst;                 // 커서를 관리할 list 선언
    for(int i=0;i<str.length();++i) // 리스트에 값 입력
        lst.push_back(str[i]);
    
    cin>>N;
    auto it = lst.end();            // 커서를 맨 오른쪽으로
    for(int i=0;i<N;++i){
        char x,y;
        cin>>x;
        
        if(x == 'L' && it != lst.begin()) --it;          // 커서를 왼쪽으로 한칸 이동
        else if(x == 'D' && it != lst.end()) ++it;       // 커서를 오른쪽으로 한칸 이동
        else if(x == 'B' && it != lst.begin()) it = lst.erase(--it); // 커서 왼쪽 삭제
        else if(x == 'P'){
            cin>>y;                                 // P이면 문자 추가 입력
            lst.insert(it,y);                       // 문자 삽입
        }
    }
    for(auto x : lst) cout<<x;
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}