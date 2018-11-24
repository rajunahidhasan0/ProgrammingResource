#include<bits/stdc++.h>
using namespace std;

int n;
int busy[205];
vector<int>v[205];
vector<int>c[205];
bool visited[205];
int cost[205];

bool bellmon_ford(int s){
    for(int i=1;i<=n;i++){
        cost[i]=INT_MAX/3;
    }
    cost[s]=0;

    for(int kk=1;kk<n;kk++){
         for(int j=1;j<=n;j++){
            int u=j;
            for(int k=0;k<v[u].size();k++){
                int vp = v[u][k];
                int w = c[u][k];
                if(cost[vp] > (cost[u]+w)){
                    cost[vp]=cost[u]+w;
                }
            }
        }
    }
/*
    bool f=true;
    for(int j=1;j<=n;j++){
        int u=j;
        for(int k=0;k<v[u].size();k++){
            int vp = v[u][k];
            int w = c[u][k];
            if(cost[vp]>cost[u]+w)
                f=false;
        }
    }
    return f;
    */
    return true;
}

void dfs(int x){

    visited[x]=true;
    for(int i=0;i<v[x].size();i++){
        if(visited[v[x][i]]==false){
            dfs(v[x][i]);
        }
    }

}

int main(){

    int t;
    cin>>t;
    for(int y=1;y<=t;y++){

        cin>>n;
        for(int j=1;j<=n;j++){
            cin>>busy[j];
        }

        int m;
        cin>>m;
        for(int j=1;j<=m;j++){
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            int w = (busy[b]-busy[a]);
            c[a].push_back(w*w*w);
        }

        bool p =  bellmon_ford(1);

        dfs(1);

        int q;
        cin>>q;
        printf("Case %d:\n",y);

        while(q--){
            int a;
            cin>>a;
            if(cost[a]>2 && cost[a]<INT_MAX/3 && visited[a]) cout<<cost[a]<<"\n";
            else cout<<"?\n";
        }

        for(int i=0;i<=n;i++){
            v[i].clear();
            c[i].clear();
        }
        memset(cost,0,sizeof(cost));
        memset(busy,0,sizeof(busy));
        memset(visited,0,sizeof(visited));
    }
    return 0;
}
