#include <bits/stdc++.h>
using namespace std;

int N,M,K;
vector<long long> arr(1000001),tree(1000001);
void update(int i, long long val){
    while(i <= N){
        tree[i] += val;
        i += (i & -i);
    }
}

long long prefix(int i){
    #include <bits/stdc++.h>
using namespace std;

int N,M,K;
vector<long long> arr(1000001),tree(1000001);
void update(int i, long long val){
    while(i <= N){
        tree[i] += val;
        i += (i & -i);
    }
}

long long prefix(int i){
    int result = 0;
    while(i > 0){
        result += tree[i];
        i -= (i & -i);
    }
    return result;
}

void solve(){
    cin>>N>>M>>K;
    for(int i=1;i<=N;++i){
        cin>>arr[i];
        update(i,arr[i]);
    }

    for(int i=0;i<M+K;++i){    
        long long sw,a,b; cin>>sw>>a>>b;

        if(sw == 1){            
            update(a,b-arr[a]);
            arr[a] = b;
        }else{;
            cout<<prefix(b) - prefix(a-1)<<'\n';
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}
 result = 0;
    while(i > 0){
        result += tree[i];
        i -= (i & -i);
    }
    return result;
}

void solve(){
    cin>>N>>M>>K;
    for(int i=1;i<=N;++i){
        cin>>arr[i];
        update(i,arr[i]);
    }

    for(int i=0;i<M+K;++i){    
        long long sw,a,b; cin>>sw>>a>>b;

        if(sw == 1){            
            update(a,b-arr[a]);
            arr[a] = b;
        }else{;
            cout<<prefix(b) - prefix(a-1)<<'\n';
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}
