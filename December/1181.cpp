#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N = 0;
    string str;
    cin >> N;
    vector<string> v;
    for(int i=0;i<N;i++){
        cin >> str;
        v.push_back(str);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=0;i<N;i++) cout<<v[i]<<'\n';
}

// 13
// but
// i
// wont
// hesitate
// no
// more
// no
// more
// it
// cannot
// wait
// im
// yours