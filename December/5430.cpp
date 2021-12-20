#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int T;cin>>T;
    while(T--){
        int N;
        bool ck = true;
        bool er = true;
        deque<int> deq;
        string str,Sttarr,temp;
        cin>>str>>N>>Sttarr;
        if(N!=0){
            for(int x=0;x<Sttarr.length();++x){
                if(Sttarr[x] == '[' ) continue;
                else if(Sttarr[x] == ',' || Sttarr[x] == ']') {
                    deq.push_back(atoi(temp.c_str()));
                    temp="";
                }
                else temp+=Sttarr[x];
            }   
        }
        int len =str.length();
        for(int xx=0;xx<len;++xx){
            if(str[xx]=='R')
                ck = !ck;
            else if(deq.empty()) {
                er = !er;
                printf("error\n");   
                break;
            }
            else if(ck) 
                deq.pop_front();
            else
                deq.pop_back();
        }
        if(er){
            printf("[");
            while(!deq.empty()){
                if(ck){
                    printf("%d",deq.front());
                    deq.pop_front();
                }else{
                    printf("%d",deq.back());
                    deq.pop_back();
                }
                if(deq.size()>0) printf(",");
            }
            printf("]\n");
        }
    }
    return 0;
}