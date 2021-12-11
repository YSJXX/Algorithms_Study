#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    vector<int> v(N);
    int x=0;
    for(int i=0;i<N;++i) {
        cin>>x;
        v[x]=i;
    }
    int R=0;
    for(int i=0;i<N;i++) if(v[i]>v[i+1]) R++;
    cout<<R<<'\n';
    return 0;
}


// #include <cstdio>
 
// int N, a,num[100001],cnt;
 
// int main() {
//   scanf("%d", &N);
//   for (int i = 0; i < N; i++) {
//     scanf("%d", &a);
//     num[a] = i;
//   }
//   for (int i = 1; i < N; i++) {
//     if (num[i] > num[i + 1]) cnt++;
//   }
//   printf("%d\n", cnt);
//   return 0;
// }