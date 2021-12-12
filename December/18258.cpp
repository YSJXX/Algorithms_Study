// #include <bits/stdc++.h>
// using namespace std;
// queue<int> q;
// int main(){
//     cin.tie(nullptr)->sync_with_stdio(false);

//     int N;cin>>N;
//     for(int i=0;i<N;++i){
//         string str;cin>>str;
//         if(str == "push") {
//             int str2;
//             cin>>str2;
//             q.push(str2);
//         }
//         else if(str == "pop") {
//             if(q.empty()) cout<<"-1\n";
//             else {
//                 cout<<q.front()<<'\n';
//                 q.pop();
//             }
//         }
//         else if(str == "size") cout<<q.size()<<'\n';
//         else if(str == "empty") {
//             if(q.empty()) cout<<"1\n";
//             else cout<<"0\n";
//         }
//         else if(str == "front") {
//             if(q.empty()) cout<<"-1\n";
//             else cout<<q.front()<<'\n';
//         }
//         else if(str == "back") {
//             if(q.empty()) cout<<"-1\n";
//             else cout<<q.back()<<'\n';
//         }
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    long long N;cin>>N;
    for(int i=0;i<N;++i){
        string str;cin>>str;
        if(str == "push") {
            long long str2;
            cin>>str2;
            q.push(str2);
        }
        else if(str == "pop") {
            if(q.empty()) cout<<"-1\n";
            else {
                cout<<q.front()<<'\n';
                q.pop();
            }
        }
        else if(str == "size") cout<<q.size()<<'\n';
        else if(str == "empty") cout<<(q.empty() ? 1:0)<<'\n';
        else if(str == "front") cout<<(q.empty() ? -1:q.front())<<'\n';
        else if(str == "back") cout<<(q.empty() ? -1:q.back())<<'\n';
    }
    return 0;
}