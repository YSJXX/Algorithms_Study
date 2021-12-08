#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    while(true){
        cin>>N;
        if(!N) break;
        vector<int> arr(N);
        for(auto& i:arr) cin>>i;
        bool ck=true;
        int R=0;
        sort(arr.begin(),arr.end());
        if((1422-arr.back())*2 > 200){
            cout<<"IMPOSSIBLE\n";
            continue;
        }
        for(int i=1;i<N;i++) {
            if(arr[i]-R<=200) R=arr[i];
            else {
                cout<<"IMPOSSIBLE\n";
                ck = false;
                break;
            }
        }
        if(ck) cout<<"POSSIBLE\n";
    }
    return 0;
}