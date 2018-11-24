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
            v = ed[f][i];
            w1 = ec[f][i];
            if(cost[v]>w+w1){
                cost[v] = w+w1;
                pq.push(pii(cost[v],v));
            }
        }
    }
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
    int n,m,i,a,b,w;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        cin>>a>>b>>w;
        ed[a].push_back(b);
        ed[b].push_back(a);
        ec[a].push_back(w);
        ec[b].push_back(w);
    }
    return 0;
}
