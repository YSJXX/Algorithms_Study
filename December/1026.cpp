#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N = 0,t=0,r=0;
    vector<int> A,B;
    cin>>N;
    for(int i=0;i<N;i++){
        cin >> t;
        A.push_back(t);
    }
    for(int i=0;i<N;i++){
        cin >> t;
        B.push_back(t);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),greater<int>());
    for(int i=0;i<N;i++){
        r+= A[i]*B[i];
    }
    cout<<r<<'\n';
    return 0;
}