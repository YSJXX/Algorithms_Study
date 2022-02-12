    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        int N,M,V;
        cin>>N>>M>>V;
        
        vector< vector<int> > v(N+1);
        vector<bool> vis(N+1);

        for(int i=0;i<M;++i) {
            int x,y; 
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i=1;i<=N;++i) sort(v[i].begin(),v[i].end());
        
        stack<int> s;
        s.push(V);
        while(!s.empty()){
            int cur = s.top(); s.pop();
            if(vis[cur]) continue;
            vis[cur]=true;
            cout<<cur<<" ";
            for(int i=v[cur].size()-1;i>=0;--i){
                int next = v[cur][i];
                s.push(next);
            }
        }
        cout<<'\n';

        vector<bool> vis1(N+1);
        queue<int> Q;
        Q.push(V);
        while(!Q.empty()){
            int cur = Q.front(); Q.pop();
            if(vis1[cur]) continue;
            vis1[cur]=true;
            cout<<cur<<" ";
            for(int i=0;i<v[cur].size();++i){
                int next = v[cur][i];
                Q.push(next);
            }
        }
        cout<<'\n';

        return 0;
    }