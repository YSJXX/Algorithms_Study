#include <bits/stdc++.h>
using namespace std;
typedef struct _Member{
    int age;
    int rank;
    string name;
}Member;

bool cmp(Member a, Member b){
    if(a.age == b.age) return a.rank < b.rank;
    return a.age < b.age;
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;cin>>N;
    Member m[N];
    for(int i=0;i<N;++i) {
        cin>>m[i].age;
        cin>>m[i].name;
        m[i].rank = i;
    }
    sort(m,m+N,cmp);
    for(auto& ans:m) cout<<ans.age<<" "<<ans.name<<'\n';
    return 0;
}