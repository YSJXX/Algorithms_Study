#include <bits/stdc++.h>
using namespace std;

void solve(){
    string A,B;cin>>A>>B;
    vector<int> ans;
    
    // 길이가 더 긴 값이 a로
    if(A.length() < B.length()) A.swap(B);
    int i = 0;
    int Alen = A.length();
    int Blen = B.length();
    int tmp = 0;        // 올림수 1 저장
    while(i < Alen){
        int sum = 0;
        if(i < Blen) sum = (B[Blen-i-1]-'0') + (A[Alen-i-1]-'0') + tmp;  // B[Blen-i-1]-'0' : 문자열 맨 뒤 가져와서 int형으로 변경
        else sum = A[Alen-i-1]-'0' + tmp;

        if(sum >= 10){      // sum이 10 넘으면 tmp에 올림수 1 저장
            sum = sum%10;
            tmp = 1;
        }else{              // sum이 10이 안넘으면 올림수가 없으니 0 저장
            tmp = 0;
        }
        ans.push_back(sum);

        if(i == Alen-1 && tmp) ans.push_back(tmp);
        ++i;

    }
    for(int i=ans.size()-1;i>=0;--i) cout<<ans[i];
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();    
    return 0;
}
