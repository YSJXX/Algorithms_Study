#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;cin>>N;
    int mid=0,range=0,mode=0,max=0,max2=0,tmp=0,tmp2=0;
    double sum=0;
    vector<int> v(N);
    map<int,int> m;
    for(int i=0;i<N;++i) {
        cin>>v[i];
        sum += v[i];
        ++m[v[i]];
    }
    for(auto& x:m) {
        if(max < x.second) {
            max = x.second;
            tmp = x.first;
        }
        else if(max2 < x.second) {   
            max2 = x.second;
            tmp2 = x.first;
        }
    }
    sort(v.begin(),v.end());
    cout<<round(sum/N)<<'\n';
    cout<<v[N/2]<<'\n';
    cout<<(max==max2? tmp2:tmp)<<'\n';
    cout<<v[N-1] - v[0]<<'\n';
    return 0;
}