// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int> tip;
//     int N=0,x=0;
//     long long R=0,a=0;
//     cin>>N;
//     for(int i=0;i<N;i++){
//         cin>>x;
//         tip.push_back(x);
//     }
//     sort(tip.begin(),tip.end(),greater<int>());
//     for(int i=1;i<=N;i++){
//         a = tip[i-1]-(i-1);
//         if(a < 0) break;
//         R += a;
//     }
//     cout<<R<<'\n';
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int N=0;
    cin>>N;
    vector<int> tip(N);
    long long R=0,a=0;
    for(int i=0;i<N;i++){
        cin>>tip[i];
    }
    sort(tip.begin(),tip.end(),greater<int>());
    for(int i=0;i<=N;i++){
        // a = tip[i]-i;
        // if(a < 0) break;
        // R += a;
        R += 0 < tip[i]-i ? tip[i]-i : 0;  //max(0,tip[i]-i);
    }
        // R += 0 < tip[i]-i ? tip[i]-i : 0  //max(0,tip[i]-i);

    cout<<R<<'\n';
    return 0;
}