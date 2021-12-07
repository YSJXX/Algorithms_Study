#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,N,R,x;
    vector<int> arr(6);
    vector<int> temp;
    cin>>A>>B>>N;
    for(int i=0;i<N;i++) {
        cin>>arr[i];
        temp.push_back(arr[i] < B ? B-arr[i] : arr[i]-B);
    }
    int min = *min_element(temp.begin(),temp.end());
    x = abs(A-B);
    R = x > min+1 ? min+1:x;
    cout<<R<<'\n';
    return 0;
}