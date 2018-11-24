
#include<bits/stdc++.h>
using namespace std;
#define MX 100005
#define INF 1000000000
#define pii pair<int,int>

vector<int>ed[MX];
vector<int>ec[MX];

int cost[MX];

void dxt(int s){
    int f,w,i;

    priority_queue<pii,vector<pii>,greater<pii> > pq;

    pii fr;
    pq.push(pii(0,s));
    cost[s] = 0;

    while(!pq.empty()){
        fr = pq.top();
        pq.pop();
        f = fr.second;
        w = fr.first;
        if(cost[f]!=w) continue;
        for(i=0;i<ed[f].size();i++){
            int v = ed[f][i];
            int w1=max(w, ec[f][i]);
            if(cost[v]>w1){
                cost[v] = w1;
                pq.push(pii(cost[v],v));
            }
        }
    }
    /*
    while(!Q.empty()) {
        u = Q.top(); Q.pop();
        if(u.dist != dis[u.city]) continue;
        len = G[u.city].size();
        for (int i = 0; i < len; i++) {
            v.city = G[u.city][i]; //u G connected with v..
            v.dist = max(u.dist, weight[u.city][v.city]);
            if(v.dist < dis[v.city]) {
                dis[v.city] = v.dist;
                Q.push(v);
            }
        }

    }*/
}

void free(){
    int i;
    for(i=0;i<MX;i++){
        ed[i].clear();
        ec[i].clear();
        cost[i] = INF;
    }
}

int main(){
    int test, tc=0;
    cin>>test;
    while(test--)
    {
        free();
        int n,m,i,a,b,w, t;
        cin>>n>>m;
        for(i=1;i<=m;i++){
            cin>>a>>b>>w;
            ed[a].push_back(b);
            ed[b].push_back(a);
            ec[a].push_back(w);
            ec[b].push_back(w);
        }
        cin>>t;
        dxt(t);
        printf("Case %d:\n", ++tc);
        for(i=0;i<n;i++){
            if(cost[i]<INF)printf("%d\n", cost[i]);
            else printf("Impossible\n");
        }
    }
    return 0;
}
