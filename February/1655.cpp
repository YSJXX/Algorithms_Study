#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    priority_queue< int,vector<int>, greater<int> > minj;
    priority_queue<int> maxj;
    int N;cin>>N;
    int temp,x;
    for(int i=0;i<N;++i){
        cin>>x;
        if(i == 0) maxj.push(x);
        else if(i == 1) {
            if(maxj.top() >= x){
                temp = maxj.top();
                minj.push(temp);
                maxj.pop();
                maxj.push(x);
            }else minj.push(x);
        }else{
            if(maxj.top() > x) maxj.push(x);
            else if(minj.top() < x) minj.push(x);
            else maxj.push(x);
        }
        // int sz = maxj.size() - minj.size();
        if(int(maxj.size() - minj.size()) > 1){
            temp = maxj.top();
            maxj.pop();
            minj.push(temp);
        }else if(int(maxj.size() - minj.size()) < 0){
            temp = minj.top();
            minj.pop();
            maxj.push(temp);          
        }
        printf("%d\n",maxj.top());
    }
    return 0;
}