#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int result=0,n,p,r=0;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>p;
        v.push_back(p); 
    }
    sort(v.begin(),v.end());
    for(auto& i : v){
        result += i;
        r += result;
    }
    cout<<r<<'\n';
    return 0;
}

